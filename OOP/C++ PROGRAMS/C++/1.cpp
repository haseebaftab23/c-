#include<iostream.h>
#include<conio.h>
main()
{
clrscr();

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                    ****************************************"<<endl<<"                    *                                      *"<<endl<<"                    *     PLEASE ENTER YOUR ATM CARD       *"<<endl<<"                    *                                      *"<<endl<<"                    ****************************************";
getch();
clrscr();
long int a[1];
char b;
for(a[0]=1; a[0]<=500; a[0]++)
	{
	cout<<endl<<endl<<endl<<endl<<endl<<"          Please wait while your transection is being processed......."<<endl;
	 clrscr();
	}
cout<<" "<<endl<<endl<<endl<<endl<<"                                       WELCOME"<<endl<<endl<<endl<<endl<<"                                  NAEEM  SIDDIQUI"<<endl<<endl<<endl<<" "<<endl<<"               Please select the language you would like to use."<<endl<<" "<<endl<<"               For English Press 'E'         For Urdu Press 'U'"<<endl<<endl<<endl;
cin>>b;
clrscr();
switch(b)
		 {
			  {
			  case 'E':
			  cout<<"ENGLISH";
			  break;
			  }
			  {
			  case 'U':
			  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                     Sorry this project is under cunstruction"<<endl<<endl<<endl<<endl<<"                           Press enter for main manu"<<endl;
			  getch();
			  clrscr();
			  cout<<"main";
			  break;
			  }

		 }

getch();
}