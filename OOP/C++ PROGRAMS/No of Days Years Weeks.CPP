//Downloaded From www.c4cpp.co.nr. (C)2009.All rights reserved.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int d,y,w,da;
cout<<"Enter the no of Days"<<endl;
cin>>d;
y=d/365;
w=((y%365)/7);
da=((y%365)%7);
cout<<y<<"Yrs "<<w<<"Weeks"<<da<<"Days";
getch();
}
