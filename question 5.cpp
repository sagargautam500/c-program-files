//WAP to read any two numbers and performs simple airthmetic operations.(addition,subtraction,division,multiplication)
#include<iostream>
using namespace std;

int main()
{
	float add,sub,mul,div,a,b;
	cout<<"enter two numbers";
	cin>>a>>b;
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	cout<<"sum is"<<add<<endl;
	cout<<"sub is"<<sub<<endl;
	cout<<"multiplication is"<<mul<<endl;
	cout<<"division is"<<div<<endl;
	return 0;
}
