#include<iostream.h>
#include<conio.h>
main()
{
int pass;
for(int i=1; i<=3; i++)
{
cout<<"enter your password = ";
cin>>pass;
clrscr();
if(pass==12345)
{
cout<<"              Balance Inquairy                       Fast cash"<<endl;
cout<<"              Transfer fund                          Utility Bills"<<endl;
cout<<"              Ohange password                        Other"<<endl;
}
else
cout<<"Try again"<<endl;
getch();
clrscr();
}
cout<<"Blocked ";
getch();
}