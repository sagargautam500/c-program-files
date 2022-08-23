//WAP to read 3 numbers and print sum of the values ,average of 3 values ,largest of 3 values and smallest of 3 values.
#include<iostream>
using namespace std;
int main()
{
   int a,b,c,s,large,small;
   float av;
   cout<<"enter 3 numbers";
   cin>>a>>b>>c;
   s=a+b+c;
   av=s/3.0;
   large=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
   small=(a<b&&a<c)?a:(b<a&&b<c)?b:c;
   cout<<"the sum of 3 numbers="<<s<<endl<<"average= "<<av<<endl<<"largest number="<<large<<endl<<"smallest number="<<small<<endl;
   return 0;
}
