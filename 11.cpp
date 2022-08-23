// WAP three numbers read from keyword and print out the largest of them without usinf if statement.
#include<iostream>
using namespace std;

int main()
{
	int a,b,c,big;
	cout<<"enter 3 numbers";
	cin>>a>>b>>c;
	big=(a>b&&a>c)?a:(b>c&&b>a)?b:c;
	cout<<"largest number is "<<big;
	return 0;
}
