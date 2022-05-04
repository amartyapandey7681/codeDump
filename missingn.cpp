#include<iostream>
using namespace std;
int main(){
    long long int n;
    int g=scanf("%lld",&n);
    int arr[n]={0};
    long long int j;
    for(long long int x=0;x<n-1;x++){
        scanf("%lld",&j);
        arr[j-1]=1;
    }
    for(long long int x=0;x<n;x++){
    if(arr[x]!=1){
    printf("%lld",(x+1));
    break;}}
    return 0;
}
//this is the template i will use