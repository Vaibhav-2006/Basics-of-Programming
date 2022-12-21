#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int a[10];
    memset(5,a,sizeof(a));
    for(int i=0;i<10;i++)
    cout<<a[i];
}