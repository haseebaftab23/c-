#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int age;
char gen;
int inc;
cout<<"Enter your age=";
cin>>age;
cout<<"Enter your gender=";
cin>>gen;
cout<<"Enter your income=";
cin>>inc;
if (age>=25&&inc>=5000&&gen=='m')
cout<<"Admission is allowed";
else
if (age>=20&&inc>=3000&&gen=='f')
cout<<"Admission is  allowed";
else
cout<<"Not allowed";
getch();
}