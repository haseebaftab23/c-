#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
		  int a,b,c,d;
		  amount:
		  cout<<endl<<endl<<endl<<endl<<"               Please insert/enter the amount in multipul of Rs. 500"<<endl<<endl<<endl<<endl<<"                                   Rs.";
		  cin>>a;
		  clrscr();
		  if(a>=500 && a%500==0 && a<=25000)
			  {
				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                    Would you receive the payment slip....? "<<endl<<endl<<endl<<"                      1 for Yes           2 for No"<<endl;
				getch();
            clrscr();
				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                   Your transection is being processed....."<<endl<<endl<<endl<<"                    Would you like to more transection...?"<<endl<<endl<<endl<<"                       1 for Yes               2 for No"<<endl;
										 cin>>c;
										 clrscr();
														 {
														 switch(c)
															  {
																		case 1:
																		{
																		cout<<"main";
																		break;
																		}
																		case 2:
																		{
																		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                         Please receive your ATM card"<<"\a"<<"\a"<<"\a"<<"\a"<<"\a"<<"\a"<<"\a"<<"\a"<<"\a"<<endl;
																		break;
																		}
																}
														  }

			  }

		  else
			  {
			  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                                   Invalid Amount"<<endl;
			  goto amount;
			  }

getch();
}
