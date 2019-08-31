#include<iostream.h>
#include<conio.h>
main()
{
int a,b,c=19;
 for(a=19;a<=38;a++)
 {
 cout<<"\n";
	for(b=0;b<=38;b++)
	 if(b>=a||b<=38-c)
	 cout<<"--";
	 else
	 cout<<"~~";
	 c++;
 }
}