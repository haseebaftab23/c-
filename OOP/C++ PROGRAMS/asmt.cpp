#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
float fir;
char op,s;
float sec;
cout<<"Enter first value = ";
cin>>fir;
cout<<"Enter second value = ";
cin>>sec;
cout<<"Select an option +,-,/,*,%,s = ";
cin>>op;
clrscr();
if (op=='+')
cout<<fir<<"+"<<sec<<" = "<<fir+sec;
else
if (op=='-')
cout<<fir<<"-"<<sec<<" = "<<fir-sec;
else
if (op=='*')
cout<<fir<<"*"<<sec<<" = "<<fir*sec;
else
if (op=='/')
cout<<fir<<"/"<<sec<<" = "<<fir/sec;
else
if (op=='s')
cout<<"the square of First value = "<<fir*fir<<endl<<"the square of Second value = "<<sec*sec;
else
cout<<"Invalid";
getch();
}