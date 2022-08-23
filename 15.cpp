//WAP that reads radius of circle and finds area and circumance.
#include<iostream>
using namespace std;

int main()
{
	float r,a,c;
	cout<<"enter radius of circle";
	cin>>r;
	a=(3.14)*r*r;
	c=2*(3.14)*r;
	cout<<"area of circle="<<a<<endl<<"circumance of circle="<<c;
	return 0;
}
