#include<iostream.h>
#include<conio.h>
main()
{
int a,b,c=18;
for(a=19;a<=37;a++)
{
cout<<"\n";
	for(b=0;b<=37;b++)
	 if(b==a||b==37-c)
	 cout<<"*";
	 else
	 cout<<" ";
	 c++;
}
}