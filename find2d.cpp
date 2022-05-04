#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){

    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>xp;
    vector<pair<ll,ll>>yp;
     pair<ll,ll>temp;
     ll a,b;
    for(ll x=0;x<n;x++){
       cin>>a>>b;

       xp.push_back(make_pair(a,1));
       yp.push_back(make_pair(b,1));

       cin>>a>>b;

        xp.push_back(make_pair(a,1));
        yp.push_back(make_pair(b,1));
    }
    sort(xp.begin(), xp.end());

    sort(yp.begin(),yp.end());

    
    return 0;
}