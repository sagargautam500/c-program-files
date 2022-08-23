//WAP that reads P,T,R and find simple interest and also amount.
#include<iostream>
using namespace std;
int main()
{
	float P,T,R,SI,A;
	cout<<"enter principle:"<<endl;
	cin>>P;
	cout<<"enter time:"<<endl;
	cin>>T;
	cout<<"enter rate:"<<endl;
	cin>>R;
	SI=(P*T*R)/100;
	A=P+SI;
	cout<<"Simple Interest="<<SI<<endl<<"Amount="<<A;
	return 0;
	
}
