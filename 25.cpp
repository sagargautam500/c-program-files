//WAP  to count number of digit in a numbers.
#include<iostream>
using namespace std;
int main()
{
	int n,digit=0;
	cout<<"enter a digit"<<endl;
	cin>>n;
	cout<<n;
	while(n!=0)
	{
		n/=10;
		digit++;
	}
	cout<<"has"<<endl<<digit<<endl<<"digits";
	return 0;
}
