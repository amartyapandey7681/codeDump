#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<string>
typedef long long int ll;
using namespace std;
int main(){

    string s;
    ll ans=0;
    cin>>s;
    map<char,ll>m;
    for(ll x=0;x<s.length();x++)
    {
        if(m.find(s[x])==m.end()){
            m[s[x]]=1;
        }else{
            m[s[x]]++;
        }
    }
    ll co;
    for(auto it=m.begin();it!=m.end();it++){
        co=it->second;
        ans+=(co*(co-1))+co;
    }
    printf("%lld",ans);
    return 0;
}
