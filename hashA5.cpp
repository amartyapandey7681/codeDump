#include<iostream>
#include<map>
#include<set>
using namespace std;
typedef long long int ll;
int main(){
    ll n,a,ans;
    scanf("%lld",&n);
    map<ll,ll>m;
    for(ll x=0;x<n;x++){
        scanf("%lld",&a);
        if(m.find(a)==m.end()){
            m[a]=1;
        }else
        {
            m[a]++;
        }
    }
    map<ll,set<ll> >map2;
    

    for(auto itr = m.begin();itr!=m.end();itr++){
        
        if(map2.find(itr->second)==map2.end()){
            set<ll>s;s.insert(itr->first);
            map2.insert({itr->second,s});
        }else{
            map2[itr->second].insert(itr->first);
        }
    }
    set<ll>temp;ll p;
    for(auto itr = map2.rbegin();itr!=map2.rend();itr++){
        p= itr->first;
        temp = itr->second;
        for(auto it = temp.begin();it!=temp.end();it++){
            for(ll x=1;x<=p;x++){
                printf("%lld ",*it);
            }
        }

    }

    return 0;
}