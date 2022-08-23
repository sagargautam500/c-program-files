//WAP to find the GCD(Greatest Common divisior) andLCM(Least Common Multiple) of two numbers.
#include<iostream>
using namespace std;
int main()
{
	int a,b,large,small,i,gcd,lcm;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	large=a>b?a:b;
	small=a<b?a:b;
	for(i=small;i>0;i--)
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
			break;
		}
	}
	for(i=large;i>0;i++)
	{
		if(i%a==0&&i%b==0)
		{
			lcm=i;
			break;
		}
	}
	cout<<"gcd="<<gcd<<endl;
	cout<<"lcm="<<lcm<<endl;
	return 0;
}
