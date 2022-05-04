#include<iostream>
using namespace std;
typedef long long int ll;
int main(){
    string s;
    cin>>s;
    s=s+"k";
    ll ln=1;
    ll h=1;
    for(ll x=0;x<s.length()-1;x++){
        if(s[x]==s[x+1]){
            h++;
        }
        else if(h>ln){
            
            ln=h;
            h=1;
        }else{
            h=1;
        }
    }
    printf("%lld",ln);
    return 0;
}