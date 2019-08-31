#include<iostream.h>
#include<conio.h>
void main(void)
{
clrscr();
int ans=1;
int power,base;
cout<<"Enter The Base=";
cin>>base;
cout<<"Enter The Power=";
cin>>power;
for(int i=1; i<=power; i++)
ans=ans*base;
cout<<"The Answer Of Base '"<<base<<"' Power '"<<power<<"' is = "<<ans;
getch();
}
