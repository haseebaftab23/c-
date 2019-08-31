#include<iostream.h>
#include<conio.h>
main()
{
int a,b,c=1;
for(a=0;a<=8;a++)
{
cout<<"\n";
	for(b=0;b<=9;b++)
	 if(b==a||b==9-c)
	 cout<<"*";
	 else
	 cout<<" ";
	 c++;
}
}