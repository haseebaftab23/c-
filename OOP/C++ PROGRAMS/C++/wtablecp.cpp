#include<iostream.h>
#include<conio.h>
void main(void)
{
clrscr();
int t,sn,en;
cout<<"Enter The Table Number=";
cin>>t;
cout<<"Enter The Starting Number=";
cin>>sn;
cout<<"Enter The Ending Number=";
cin>>en;
clrscr();
int i=sn;
while(i<=en)
{
cout<<t<<" X "<<i<<" = "<<t*i<<endl;
i++;
}
getch();
}
