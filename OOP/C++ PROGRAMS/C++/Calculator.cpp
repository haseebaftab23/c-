#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a,b;
char s;
cout<<"Enter The 1st Value=";
cin>>a;
cout<<"Enter The 2nd Value=";
cin>>b;
cout<<"Press The Operational Sign (like +,-,*,/ or %)=";
cin>>s;
if(s=='+')
cout<<a+b;
else if(s=='-')
cout<<a-b;
else if(s=='*')
cout<<a*b;
else if(s=='/')
cout<<a/b;
else if(s=='%')
cout<<a%b;
else
cout<<"Not Allowed";
getch();
}
