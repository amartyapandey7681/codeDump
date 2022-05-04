#include<iostream>
#include<map>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    map<ll,ll>m;
    scanf("%lld",&n);
    ll arr[n];
    for(ll x=0;x<n;x++)
    {
        scanf("%lld",&arr[x]);
        if(x!=0)arr[x]=arr[x]+arr[x-1];

        if(m.find(arr[x])==m.end()){
            m[arr[x]]=1;
        }else{
            printf("YES");
            return 0;
        }
    }
    printf("NO");

    return 0;
}