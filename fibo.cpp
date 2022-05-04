#include<iostream>
typedef long long int ll;
using namespace std;
int f(ll n,ll &a,ll &b){
    if(n<0)return 1;
    ll c = a;
    a=b;

    b = b +c ;

    return f(--n,a,b);

}
int main()
{
    ll n;
    cin>>n;
    ll a=1,b=1;
    f(n-2,a,b);
    cout<<a;
    return 0;
}