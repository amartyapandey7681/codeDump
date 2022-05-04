#include<iostream>
typedef long long int ll;
using namespace std;
int main(){
    ll n;
    scanf("%lld",&n);
    ll ini;
    scanf("%lld",&ini);
    ll sum=0;
    ll nx;
    for(ll x=1;x<n;x++)
    {
        ll k=0;
        scanf("%lld",&nx);
        if(nx<ini){

            k=ini-nx;
            sum+=(ini-nx);
        }
        ini=nx+k;
    }
    printf("%lld",sum);
    return 0;
}