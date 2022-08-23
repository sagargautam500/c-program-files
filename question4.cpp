//WAP that reads a number and sum of the square of digit .(for eg:tf the num 123 of the sum =1^2+2^2+3^3)
#include<iostream>
using namespace std;
int main()
{
	int n,s=0,temp;
	cout<<"enter the numbers"<<endl;
	cin>>n;
	while(n!=0)
	{
	temp=n%10;
	s+=temp*temp;
	n/=10;
}
cout<<"sum="<<s;
return 0;
}
