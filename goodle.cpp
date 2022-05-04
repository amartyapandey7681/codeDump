#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<string>
#include<queue>
typedef long long int ll;
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    
    while(t--){
        string a,b;
        cin>>a>>b;

        int sum=0;
        int f=0;
        map<char,queue<int>>map1;
        map<char,queue<int>>map2;
        for(int x=0;x<b.length();x++){
            if(map1.find(b[x])==map1.end()){
                queue<int>s;
                s.push(x);
                map1.insert({b[x],s});
                map2.insert({b[x],s});
            }else{
                map1[b[x]].push(x);
                map2[b[x]].push(x);
            }
        }
            // for(auto it=map.begin();it!=map.end();it++){
            //     cout<<it->first<<" ";
            //     while(!it->second.empty()){
            //         cout<<it->second.front()<<" ";
            //         it->second.pop();
            //     }
            //     cout<<"\n";
            // }
        int gre=0;int gg=0;int tem;
        for(int x=0;x<a.length();x++){

            cout<<"x="<<x<<"\n";
             if(map1.find(a[x])==map1.end()){
                gg=1;
                cout<<-1;break;
            }

            if(map1.find(a[x])!=map1.end()){

                tem = map1[a[x]].front();
                cout<<"tem "<<tem<<" "<<a[x]<<"\n";
                if(tem>=gre){
               
                    gre = tem;
                    cout<<"gre "<<gre<<"\n";
                    map1[a[x]].pop();
                    if(map1[a[x]].empty()){
                        map1.erase(a[x]);
                    }
                }
            
                if(tem<gre){
                    sum++;
                    map1.insert(map2.begin(),map2.end());
                    for(auto it=map1.begin();it!=map1.end();it++){
                        cout<<it->first<<" ";
                        while(!it->second.empty()){
                            cout<<it->second.front()<<" ";
                            it->second.pop();
                        }
                        cout<<"\n";
                    }
                    cout<<"sum  "<<sum<<"\n";
                    x--;
                    gre=0;
                }
            cout<<"gre wrong :"<<gre<<"\n";

            }
        
        } 
        if(gg==0){
            //if(gre==b.length()-1)
            cout<<sum<<" pp\n";
            
        }
    
    }

    return 0;
}