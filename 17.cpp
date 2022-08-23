//WAP that reads temp in degree celcius and convert it into fahrenheit.
#include<iostream>
using namespace std;
int main()
{
	float celcius,fahrenheit;
	cout<<"enter temp in degree in celcius"<<endl;
	cin>>celcius;
	fahrenheit=(1.8*celcius)+32;
	cout<<"the temp in degree fahrenheit="<<fahrenheit;
	return 0;
}
