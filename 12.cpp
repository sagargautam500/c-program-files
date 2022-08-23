//WAP to read two integers values m and n and to decide and print whether m is a multiple of n.
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"enter two values";
	cin>>m>>n;
	if(n%m==0)
	cout<<m<<"is a multiple of"<<n;
	else
	cout<<m<<"is not a multiple of"<<n;
	return 0;
}
	

