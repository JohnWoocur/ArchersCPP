#include <iostream>
using namespace std;
int main()
{
char p='y';
while(p=='y')
{
cout<<" Welcome to the HSBC hongong Shangai Banking Cooperation ltd\n";
cout<<"=============================================================\n";
int i=1111;
cin>>i;
if (i==1111)
{
cout<<"Welcome to our ATM dear valude customer please see the list below\n";
cout<<"----------------------------------------------------------------- \n";
cout<<"saving account--s\n";
cout<<"current accont--c\n";
char a;
cin>>a;
switch(a)
{
case's':
cout<<"Enter your accounts no first 5 digit\n";
int x;
cin>>x;
if(x==86100)
{
cout<<"dear customer please select the service as the list given below\n";
cout<<"interest calc--b\n cash wdhrawl--w\n";
char w;
cout<<"type the service code letter:\n";
cin>>w;
switch (w)
{
case 'b':
cout<<"enter your bank balance :\n ";
float r;
cin>>r;
cout<<"enter the number of months for fixed deposit for your bank balance:\n";
int m;
cin>>m;
cout<<"bank interst rate is 5% for year\n";
float e;
e=(r/m)*0.05;
cout<<"you will got interset for this bank balance is:"<<e;
break;
case 'w':
cout<<"sorry next atm please\n";
break;
default:
cout<<"invalid service choice\n";
}
}
else
cout<<"please check your account type\n";
break;
case'c':
cout<<"Enter your accounts no first 5 digit\n";
int z;
cin>>z;
if(z==10058)
{
cout<<"dear customer\n";
cout<<"these are fees collected regularly\nbank service charge=300\ncheque book fees=750\n";
}
break;
default:
cout<<"invalid account type\n";
}
}
else
cout<<"invalid pin number\n";
cout<<"do you wish to go to home page y or n\n";
cin>>p;
}
return 0;
}

