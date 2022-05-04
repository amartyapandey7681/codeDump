#include<iostream>
#include<vector>
typedef long long int ll;
using namespace std;

int main(){

    ll n;
    cin>>n;
    vector<vector<int>>v;
    vector<int>temp;
    for(int x=0;x<n;x++){
        
        for(int y=0;y<n;y++){

            ll a;
            cin>>a;
            if(a==1)
                temp.push_back(y+1);

        }
        v.push_back(temp);
        temp.clear();

    }
    ll k=1;
    for(auto it = v.begin();it!=v.end();it++){
        cout<<k<<": ";k++;
        vector<int>u=*it;
        for(auto it1=u.begin();it1!=u.end();it1++)
        {
            cout<<*it1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}