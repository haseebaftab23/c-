#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
float phy,com,math;
cout<<"Enter your physics marks=";
cin>>phy;
cout<<"Enter your computer marks=";
cin>>com;
cout<<"Enter your math marks=";
cin>>math;
float t=phy+com+math;
cout<<"Your total marks is="<<t;
float avg=t/300*100;
cout<<"Your average is="<<avg;
if(avg>=80&&avg<100)
cout<<"Your grade is=A";
else
if(avg>=70&&avg<80)
cout<<"Your grade is=B";
else
if(avg>=60&&avg<70)
cout<<"Your grade is=C";
else
if(avg>=50&&avg<60)
cout<<"Your grade is=D";
else
if(avg<40)
cout<<"You are Failed";
getch();
}
