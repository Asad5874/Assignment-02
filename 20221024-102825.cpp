#include<iostream>
using namespace std;

int main()
{
int num1, num2;
char x;
while(true)
{
cout<<"enter the num one "<<endl;
cin>>num1;
cout<<"enter the num two "<<endl;
cin>>num2;
cout<<"press a for +"<<endl;
cout<<"press b for -"<<endl;
cout<<"press c for *"<<endl;
cout<<"press d for /"<<endl;
cout<<"press e for %"<<endl;
cin>>x;
if(x=='a')
cout<<"sum ="<<num1+num2<<endl;
else
if(x=='b')
cout<<"subtraction ="<<num1-num2<<endl;
else
if(x=='c')
cout<<"multiplication ="<<num1*num2<<endl;
else
if(x=='d')
cout<<" division ="<<num1/num2<<endl;
else
if(x=='e')
cout<<"remainder ="<<num1%num2<<endl;
else
cout<<"invalid operation"<<endl;
}
return 0;
}