//WAP to read character from keyboard and convert it into upppercast if it is in lowercase and viceversa.
#include<iostream>
using namespace std;
int main()
{
	char c;
	start:
	cout<<"enter a character"<<endl;
	cin>>c;
	if(c>=65&&c<=90)
	c+=32;
	else if(c>=97&&c<=132)
	c-=32;
	else
	{
		cout<<"invalid input";
		goto start;
	}
	cout<<c;
	return 0;
}
