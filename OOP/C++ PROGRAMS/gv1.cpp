#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a[5];
char b[20];
cout<<"Enter your name =";
cin>>b;
cout<<"Hello, "<<b<<"!"<<endl;
cout<<"Enter any no. ";
 cin>>a[0];
cout<<"Enter any no. ";
 cin>>a[1];
cout<<"Enter any no. ";
 cin>>a[2];
cout<<"Enter any no. ";
 cin>>a[3];
  clrscr();
	if(a[0]>a[1]&&a[0]>a[2]&&a[0]>a[3])
	  cout<<"The greatest value is = "<<a[0];
 else
	if(a[1]>a[0]&&a[1]>a[2]&&a[1]>a[3])
	  cout<<"The greatest value is = "<<a[1];
 else
	if(a[2]>a[0]&&a[2]>a[1]&&a[2]>a[3])
	  cout<<"The greatest value is = "<<a[2];
 else
	if(a[3]>a[1]&&a[3]>a[2]&&a[3]>a[0])
	  cout<<"The greatest value is = "<<a[3];
getch();
}
