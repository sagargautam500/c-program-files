//WAP that will obtain the length and width of a reactangle from the user and compute it's area and perimeter.
#include<iostream>
using namespace std;

int main()
{
	float l,b,a,p;
	cout<<"enter length and breadth of reactangle";
	cin>>l>>b;
	a=l*b;
	p=2*(l+b);
	cout<<"area="<<a<<endl<<"perimeter="<<p;
	return 0;
}
