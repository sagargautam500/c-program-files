//WAP that reads coefficient of quadratic equation and find its roots..
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float a,b,c,temp,root1,root2;
	cout<<"enter the coefficient of quadratic equation"<<endl;
	cin>>a>>b>>c;
	temp=sqrt(b*b-4*a*c);
	root1=(-b+temp)/(2*a);
	root2=(b+temp)/(2*a);
	cout<<"their roots are"<<root1<<endl<<root2;
	return 0;
}
