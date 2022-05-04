#include<iostream>
using namespace std;
typedef long long int ll;
int main(){

    ll n,m;
    cin>>n>>m;
    ll arr[n][m];
    for(ll x=0;x<n;x++){
        for(ll y=0;y<m;y++){
            cin>>arr[x][y];
        }
    }
    if(m==0 && n==0)
    {
        cout<<arr[0][0];
        return 0;
    }
    
    for(ll x=0;x<m;x++){
        cout<<arr[0][x]<<" ";
    }

    ll count = n*m-m;
    ll x1=1,y1=m-1,k=1;
    m--;n--;
    while(count>0){
        if(k%4==1){
            ll l=1;
            for(;l<=n;l++){
                cout<<arr[x1][y1]<<" ";
                x1++;
                count--;
            }
            n--;
            x1--;
            y1--;
            
        }
        else if(k%4==2){
            ll l=1;
            for(;l<=m;l++){
                cout<<arr[x1][y1]<<" ";
                y1--;
                count--;
            }
            m--;
            y1++;
            x1--;
        }else if(k%4==3){
            ll l=1;
            for(;l<=n;l++){
                cout<<arr[x1][y1]<<" ";
                x1--;
                count--;
            }
            x1++;
            n--;
            y1++;
        }else{
            ll l=1;
            for(;l<=m;l++){
                cout<<arr[x1][y1]<<" ";
                y1++;
                count--;
            }
            m--;
            y1--;
            x1++;
        }
        
    k++;
    }
    return 0;
}