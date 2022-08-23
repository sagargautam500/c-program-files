//WAP to find the second largest number(middle) among three numbers.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three numbers"<<endl;
	cin>>a>>b>>c;
	if(a>b&&a<c||a<b&&a>c)
	{
		cout<<"the second largest number="<<a;
		
	}
	else if(b<a&&b>c||b<c&&b>a)
	{
	cout<<"the second largest number="<<b;	
	}
	else
	{
		cout<<"the second largest number="<<c;
	}
	return 0;
}
