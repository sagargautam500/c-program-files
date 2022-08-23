//WAP that reads a number & check whether it is armstrong number or not.
#include<iostream>
using namespace std;
int main()
{
	int n,r,s=0,num;
	cout<<"enter number"<<endl;
	cin>>num;
	n=num;
	while(n!=0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	cout<<"the value="<<s<<endl;
	if(num==s)
	{
	cout<<"the given number is armstorng";}
	else
	{
	cout<<"the given number isn`t armstorng"; }
	return 0;
}
