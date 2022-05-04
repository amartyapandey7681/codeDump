#include<iostream>
#include<set>
using namespace std;
typedef long long int ll;
int main(){
    ll n,a,m;
    set<ll>s;
    scanf("%lld %lld",&n,&m);
    for(ll x=0;x<n;x++){
        scanf("%lld",&a);
        s.insert(a);
    }
    for(ll x=0;x<m;x++){
        scanf("%lld",&a);
        s.insert(a);
    }
    for(auto it = s.begin();it!=s.end();it++){
        printf("%lld ",*it);
    }
    return 0;
}

