#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a[3];
cout<<"Enter any no. = ";
cin>>a[0];
cout<<"Enter any no. = ";
cin>>a[1];
cout<<"Enter any no. = ";
cin>>a[2];
clrscr();
	   if(a[0]>a[1]&&a[0]>a[2])
		cout<<a[0];
	else
		if(a[1]>a[0]&&a[1]>a[2])
		cout<<a[1];
	else
		if(a[2]>a[1]&&a[2]>a[0])
		cout<<a[2];
getch();
}

