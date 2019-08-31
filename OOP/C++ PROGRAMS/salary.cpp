#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
float salary,bonous,hr,ns;
cout<<"Enter your salary = ";
cin>>salary;
bonous=salary*10/100;
hr=salary*12/100;
ns=salary+bonous-hr;
cout<<"Your net salary is = "<<ns;
getch();
}