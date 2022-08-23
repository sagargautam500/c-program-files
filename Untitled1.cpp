//WAP that reads a number and tests whether it is multiple of 5 or not.
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	if(n%5==0)
	cout<<n<<"is a multiple of 5";
	else 
	cout<<n<<"is not multiple of 5";
	return 0;
}

