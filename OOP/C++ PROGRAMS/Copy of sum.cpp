#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int n;
cout<<"Enter any no. = ";
cin>>n;
int sum=0;
for(int i=1; i<=n; i++)
sum=sum+i;
cout<<sum;
getch();
return 0;
}
