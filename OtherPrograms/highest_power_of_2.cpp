#include<iostream>
#include<string>
using namespace std;
int power(bool *a,int n)
{
    int power = 0;
    for (int i = n-1;i >= 0; i--) {
        if (a[i] == 0)
            power++;
        else
            break;
    }
 
    return power;
}
int main()
{
	int n;
	cin>>n;
	if(n==0)
	return -1;
	bool a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<power(a,n);
}
