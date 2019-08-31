#include<iostream.h>
#include<conio.h>
main()
{
int pass;
for(int i=1; i<=3; i++)
{
cout<<"Enter Your Password=";
cin>>pass;
if(pass==12345)
{
cout<<"Balance Inquiry         Fast Cash "<<endl;
cout<<"Utility Bills           Transfer Cash"<<endl;
cout<<"Change Password         Others";
}
else
{
cout<<"Wrong Password, Try Again";
getch();
}
}

cout<<"Your ATM Card Is Blocked";
getch();
}
