//WAP to evaluate the series:s=1+2*1+3*2+-----n*n-1.
#include<iostream>
using namespace std;
int main()
{
	int n,i,s;
	cout<<"enter numbers"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<i<<"*"<<i-1<<"+";
	}
	return 0;
	
}
