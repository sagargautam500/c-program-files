//WAP to reverser a number.
#include<iostream>
using namespace std;
int main()
{
	int n,r,rev;
	cout<<"enter number"<<endl;
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n/=10;
	}
	cout<<"the reverse number is:"<<rev;
	return 0;
}
