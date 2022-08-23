//WAP to input time in second convert it into hour ,minute and second.
#include<iostream>
using namespace std;

int main()
{
	int sec,min,hr;
	cout<<"enter time in seconds";
	cin>>sec;
	min=sec/60;
	sec%=60;
	hr=min/60;
	min%=60;
	cout<<hr<<"hour"<<min<<"minute"<<sec<<"seconds";
	return 0;
}
