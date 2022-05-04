#include<iostream>
#include<algorithm>
typedef long long int ll;
using namespace std;
int main(){

    ll n;
    cin>>n;
    ll arr[n];
    for(int x=0;x<n;x++)
    {
        cin>>arr[x];
    }

    sort(arr,arr+n);
    ll dif =0;
    for(int x=n-1;x>1;){
        dif+=arr[x]-arr[x-1];
        x=x-2;
    }

    if(n%2==0){
        dif+=arr[1]-arr[0];
    }else{
        dif=dif-arr[0];
    }
    cout<<dif;
    return 0;
}