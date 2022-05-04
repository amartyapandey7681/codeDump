#include<queue>
#include<iostream>
using namespace std;
typedef long long int ll;
int main(){

    ll n;
    scanf("%lld",&n);
    priority_queue<int,vector<int>,greater<int>>w;
    for(ll x=0;x<n;x++){

        int q;
        scanf("%d",&q);
        if(q==1){
            int y;
            scanf("%d",&y);
            w.push(y);
        }else{
            printf("%d\n",w.top());
            w.pop();
        }
    }

    return 0;
}