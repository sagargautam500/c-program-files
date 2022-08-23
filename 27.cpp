//WAP to find sum of digits in a number.
#include<iostream>
using namespace std;
int main()
{
	int n,s=0,r;
	cout<<"enter numbers"<<endl;
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n/=10;
	}
	cout<<"sum of digit="<<s;
	return 0;
}
