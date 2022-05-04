#include<iostream>
#include<map>
#include<vector>
#include<set>
typedef long long int ll;
using namespace std;
int main(){

    ll t;
    scanf("%lld",&t);
    ll ans=0;
    while(t>0){
        if(t%2==1){
            t--;ans++;
        }
        t=t/2;

    }
    printf("%lld",ans);
    return 0;
}
