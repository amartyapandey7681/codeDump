#include<iostream>
#include<map>
using namespace std;
typedef long long int ll;
int main(){
    ll n,k;
    map<ll,ll>m;
    scanf("%lld %lld",&n,&k);
    ll arr[n];
    for(ll x=0;x<n;x++)
    {
        scanf("%lld",&arr[x]);
    }
    
    for(ll x=0;x<k;x++){
        if(m.find(arr[x])==m.end()){

            m[arr[x]]=1;
        }else{
            m[arr[x]]++;
        }
    }
    printf("%ld ",m.size());
    for(ll x=k;x<n;x++){
        m[arr[x]]++;
        m[arr[x-k]]--;
        if(m[arr[x-k]]==0)m.erase(arr[x-k]);
        printf("%ld ",m.size());
    }
    return 0;
}