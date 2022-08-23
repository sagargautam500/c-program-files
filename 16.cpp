//WAP that reads two numbers and swap them .
#include<iostream>
using namespace std;

int main()
{
	int a,b,temp;
	cout<<"enter numbers";
	cin>>a>>b;
	cout<<"before swap"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swap"<<endl<<"a="<<a<<endl<<"b="<<b;
	return 0;
}
