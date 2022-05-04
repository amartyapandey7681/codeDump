#include<iostream>
#include<map>
using namespace std;
void fun(map<int,int>&m){
    m[1]=11;
}
int main()
{
    map<int,int>m;
    m.insert({1,2});
    m.insert({2,4});
    fun(m);
    for(auto it = m.begin();it!=m.end();it++)
        printf("%d %d\n",it->first,it->second);
    return 0;
}