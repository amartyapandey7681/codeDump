#include<iostream>
using namespace std;
int main(){
    long long int n;
    int g=scanf("%lld",&n);
    while(n!=1){
        printf("%lld ",n);
        if(n%2==0){
            n=n/2;

        }else
        {
            n=n*3+1;
        }
    }
    printf("%lld",1ll);
    return 0;
}
//this is the template i will use