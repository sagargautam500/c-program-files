//WAP to display the series:1/2 2/3 3/4 4/5 5/6_ _ _ _ _ _ _ _n/n+1.
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<i<<"/"<<i+1<<"  ";
	}
	return 0;
}

