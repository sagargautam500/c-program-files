//WAP in a c++ to read a four digit number and print the sum of it's digits.
#include<iostream>
using namespace std;
int main()
{
	int n,r,s=0;
	cout<<"enter four digit numbers"<<endl;
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		s+=r;
		n/=10;
	}
	cout<<"the sum of four digit is"<<s;
	return 0;
}
