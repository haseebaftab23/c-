#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
{
char ch[20];
int a=0;
cout<<"Enter password : ";
xy:
ch[a]=getch();
cout<<"*";
a++;
if(a<5)
goto xy;
else
if(ch[0]=='1' && ch[1]=='2' && ch[2]=='3' && ch[3]=='4' && ch[4]=='5')
{
cout<<"\a\n access granted";
goto xz;
}
else
{
cout<<"\a Access denied";
}
}
	 int s[5];
	 clrscr();
	 xz:
	 {
	 clrscr();
	 cout<<"\n\t\t <!^!^!^!^!^!^!^!^!^!>\n\n";
	 cout<<"\t\t    1.Messages \n";
	 cout<<"\t\t    2.Contacts \n";
	 cout<<"\t\t    3.Call Register\n";
	 cout<<"\t\t    4.Settings\n";
	 cout<<"\t\t    5.Games\n";
	 cout<<"\t\t    6.Extras\n";
	 cout<<"\t\t    7.Network Menu\n";
	 cout<<"\t\t ==>Select one statement given above : ";
	 cin>>s[0];
	 clrscr();
	 switch(s[0])
		case 1:
				{
				cout<<"\n\t\t <!^!^!^!^!^!^!^!^!^!>\n\n";
				cout<<"\t\t     1.Create Message \n\t\t     2.Inbox \n\t\t     3.Sent Items \n\t\t     4.Drafts \n\t\t     5.Dlete Messages \n\t\t     6.Message Settings \n\t\t     7.Main menu \n";
				cout<<"\t\t  ==>Selest one statement given above : ";
				cin>>s[1];
				clrscr();
						switch(s[1])
								 case 1:
										{
											char c[1000];
											int p;
											cout<<"\n\t !^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n\n";
											cout<<"\t\t<== Write your Message below ==> \n\t\t";
											cin>>c;
											clrscr();
											cout<<"\n\n\t\t      Phone number : ";
											cin>>p;
											for(int i=1; i<=500; i++)
										  {
											cout<<"\n\n\n\t\t\t  Sending Request............";
											clrscr();
										  }
											cout<<"\n\n\n\n\t\t ~~~~~~~~~ Request Successful ~~~~~~~~~ ";
										}
								 case 2:
										{
										  cout<<"\n\n\n\t\t\t      \aEmpty ";
										}
										break;
								 case 3:
										{
										  cout<<"\n\n\n\t\t\t      \aEmpty ";
										}
										break;
								 case 4:
										{
										 cout<<"\n\n\n\t\t\t      \aEmpty ";
										}
										break;
								 case 5:
										{
										int d[3];
										cout<<"\n\n\t\t     1.One by One \n\t\t     2.Delete all \n";
										cout<<"\t\t  ==>Selest one statement given above : ";
										cin>>d[0];
											  switch(d[0])
													 case 1:
															 {
															  cout<<"\t\t     1.Inbox \n\t\t     2.Sent Items \n\t\t     3.Drafts \n";
															  cout<<"\t\t  ==>Selest one statement given above : ";
															  cin>>d[1];
																	 switch(d[1])
																			case 1:
																					{
																					 cout<<"\n\n\t\t\t      \aThere is no item in Inbox ";
																					}
																					break;
																			case 2:
																					{
																					 cout<<"\n\n\t\t\t      \aSent items folder is empty ";
																					}
																					break;
																			case 3:
																					{
																					 cout<<"\n\n\t\t\t      \a Drafts folder is empty ";
																					}
															  }
															  break;
													 case 2:
															 {
															  cout<<"\t\t     1.Inbox \n\t\t     2.Sent Items \n\t\t     3.Drafts \n";
															  cout<<"\t\t  ==>Selest one statement given above : ";
															  cin>>d[2];
																	 switch(d[2])
																			case 1:
																					{
																					 cout<<"\n\n\t\t\t      \aThere is no item in Inbox";
																					}
																					break;
																			case 2:
																					{
																					 cout<<"\n\n\t\t\t      \aSent items folder is empty ";
																					}
																					break;
																			case 3:
																					{
																					 cout<<"\n\n\t\t\t      \a Drafts folder is empty";
																					}
																					break;
													 }
									 }
									 break;

							 case 7:
										{
										goto xz;
										}

					break;
				}
	 }
getch();
}
