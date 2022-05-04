#include<iostream>
#include<set>
using namespace std;
typedef long long int ll;
int main(){
    ll n,a;
    scanf("%lld",&n);
    set<ll>s;
    
    for(ll x=0;x<n;x++)
    {

        scanf("%lld",&a);
        s.insert(a);
    }
    if(n==1){
        printf("%d",1);
        return 0;
    }
    ll max=0,pre=0,c=1,f=-1;
    auto itr = s.begin();

    for(;itr!=s.end();itr++) {
        if(itr == s.begin())
        {
            pre = *itr;
            f=1;
        }else if(*itr - pre ==1 ||*itr - pre ==0){
            c++;
           
            pre = *itr;
            f=2;
        }else {
             if(c>max){
                max=c;
            }
            c=1;
            f=3;
            pre = *itr;
        }
    }
    itr = s.end();

    ll last = *(--itr)-*(--itr);
    if(f == 2 && last ==1 ){
        
        if(c>max)max=c;
    }
    if(f ==2 &&  last==0)
    {
        if(c>max)max=c;
    }
    printf("%lld",max);
    return 0;
}