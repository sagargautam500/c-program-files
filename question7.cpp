//WAP that reads marks in 5 subjects and finds total marks and percentage.
#include<iostream>
using namespace std;

int main()
{
	int marks[5],i;
	float total,percentage;
	for(i=0;i<5;i++)
	{
	cout<<"enter marks in subject"<<endl;
	cin>>marks[i];
	total=total+marks[i];
}
percentage=total/5;
cout<<"total marks is"<<total<<endl<<"and percentage is"<<percentage;
return 0;
	
}
