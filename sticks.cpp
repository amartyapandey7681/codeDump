#include<iostream>
#include<queue>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,a,i,j,sum=0;
    scanf("%lld",&n);
    priority_queue<ll,vector<ll>,greater<ll>>q;
    for(ll x=0;x<n;x++){
        scanf("%lld",&a);
        q.push(a);
    }
    if(n==1){
        printf("%lld",q.top());return 0;
    }
    while(q.size()!=1){

        i = q.top();
        q.pop();
        j = q.top();
        q.pop();
        sum=sum+i+j;
        q.push(i+j);
    }

    printf("%lld",sum);
    return 0;
}