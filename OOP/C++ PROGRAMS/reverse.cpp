#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a[5];
cout<<"Enter the value containing three digits : ";
cin>>a[0];
a[1]=a[0]%10;
a[2]=a[0]/10;
a[3]=a[2]%10;
a[4]=a[2]/10;
clrscr();
cout<<"\n\n---------------------------------------------------------------------------\n";
cout<<"The reverse of given value is : "<<a[1]<<a[3]<<a[4]<<"\n";
cout<<"---------------------------------------------------------------------------\n";
getch();
}