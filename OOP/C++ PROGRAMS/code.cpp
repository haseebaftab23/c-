#include<iostream.h>
#include<conio.h>
main()
{
char ch[20];
int j=0,o=0;
cout<<"Enter the password within a trial period of 4 times:";
sam:
ch[j]=getch();
cout<<"*";
j++;
if(j<8)
{goto sam;}
else
{}
if (ch[0]=='p'&&ch[1]=='a'&&ch[2]=='s'&&ch[3]=='s' &&ch[4]=='w'&&ch[5]=='o'&&ch[6]=='r'&&ch[7]=='d')
{
cout<<"\a\nACESS GRANTED";

}
else
{
cout<<"\a\nACESS DENIED ";
o++;
j=0;
if(o<4)
goto sam;
cout<<"\nYou have entered the wrong password 4 times";
}
}
