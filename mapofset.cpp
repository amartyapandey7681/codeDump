#include<iostream>
#include<map>
#include<vector>
#include<set>
typedef long long int ll;
using namespace std;
int main(){

    ll n,k,a,f,s;
    scanf("%lld %lld",&n,&k);
    map<ll,ll>map1;
    map<ll,set<ll>>map2;
    
    for(ll x=0;x<n;x++){
        scanf("%lld",&a);
        if(map1.find(a)==map1.end()){
            map1.insert({a,1});
        }else{
            map1[a]++;
        }
    }
    for(auto itr = map1.begin();itr!=map1.end();itr++){
        f=itr->first;
        s=itr->second;

        if(map2.find(s)==map2.end()){
            set<ll>temp;
            temp.insert(f);
            map2.insert({s,temp});
        }else{
            map2[s].insert(f);
        }
        
    }
    for(auto itr = map2.rbegin();itr!=map2.rend() && k>0;itr++){

        set<ll>temp =itr->second;
        
        for(auto it = temp.begin();it!=temp.end() && k>0;it++,k--){
            printf("%lld ",*it);
        }
    }
    return 0;
}