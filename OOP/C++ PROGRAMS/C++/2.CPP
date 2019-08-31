#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a[3];
						 pin:
						 a[0]=1234;
						 cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                              Please insert your PIN code"<<endl<<"                              ____________________________"<<endl;
						 cin>>a[1];
						 if(a[0]==a[1])
						 {
						  clrscr();
								main:
								{
								for(a[3]=1; a[3]<=500; a[3]++)
											 {
											 cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"          Please wait while your transection is being processed.......";
											 clrscr();
											 }
											 clrscr();
								}




						 }
						 else
						 {
						 clrscr();
						 cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                              Sorry invalid password"<<endl<<endl<<endl<<"                              Press enter for retry"<<endl;
						 getch();
						 clrscr();
						 goto pin;
						  }


getch();
}