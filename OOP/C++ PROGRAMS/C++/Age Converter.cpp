#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a,mo,w,d,h,mi,s;
cout<<"Enter Your Age=";
cin>>a;
clrscr();
cout<<"Your Age Is '"<<a<<"' Years"<<endl;
mo=a*12;
cout<<"Your Age In Monthes="<<mo<<endl;
w=mo*52;
cout<<"Your Age In Weeks="<<w<<endl;
d=w*365;
cout<<"Your Age In Days="<<d<<endl;
h=d*24;
cout<<"Your Age In Hours="<<h<<endl;
mi=h*60;
cout<<"Your Age In Minuts="<<mi<<endl;
s=mi*60;
cout<<"Your Age In Seconds="<<s<<endl;
getch();
}
