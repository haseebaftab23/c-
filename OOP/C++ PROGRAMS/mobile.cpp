#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
z:
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t !^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n";
cout<<"\n\t\t| In the name of Allah Most Gracious & Most Merciful  |\n";
cout<<"\t\t_______________________________________________________";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tPress any key to continue";
getch();
clrscr();
cout<<"\n\n\n !^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n\n\t\t\tDeveloped by Chauhdry Abubakkar\n\t\t\tStudent of BS(CS) in ITM College.\n\t\t\tFor Contact=>\n\t\t\tCell No: +923216044536\n\t\t\tEmail  : abubakkarhashmi@yahoo.com\n\n\n''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n________________________________________________________________________________\n\t\t\t\t\t";
getch();
{
clrscr();
char ch[20];
int j=0,o=0;
cout<<"\n\n\n !^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!";
cout<<"\n\n\n\n\n\t    Enter the password within a trial period of 4 times: ";
sam:
ch[j]=getch();
cout<<"*";
j++;
if(j<8)
{goto sam;}
else
{}
if (ch[0]=='p'&&ch[1]=='a'&&ch[2]=='s'&&ch[3]=='s' &&ch[4]=='w'&&ch[5]=='o'&&ch[6]=='r'&&ch[7]=='d')
{
goto main;
}
else
{
cout<<"\a\n\t    ACCESS DENIED ";
o++;
j=0;
if(o<4)
goto sam;
clrscr();
cout<<"\n\n\n !^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!";
cout<<"\n\n\n\n\n\t\tYou have entered the wrong password 4 times";
getch();
goto z;
}
}
int s[5];
	main:
	clrscr();
	 cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n";
	 cout<<"\t\t\t    [1] - Messages \n";
	 cout<<"\t\t\t    [2] - Contacts \n";
	 cout<<"\t\t\t    [3] - Call Register\n";
	 cout<<"\t\t\t    [4] - Settings\n";
	 cout<<"\t\t\t    [5] - Games\n";
	 cout<<"\t\t\t    [6] - Extras\n";
	 cout<<"\t\t\t    [7] - Network Menu\n\n";
	 cout<<"\t\t\t    Select an option : ";
	 cin>>s[0];
	 clrscr();
			 switch(s[0])
					{
					case 1:
						  {
						  sms:
						  clrscr();
							cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n\t\t\t    ***** Messages *****\n\t\t\t    ____________________\n\n";
							cout<<"\t\t\t    [1] - Create Message \n\t\t\t    [2] - Inbox \n\t\t\t    [3] - Sent Items \n\t\t\t    [4] - Drafts \n\t\t\t    [5] - Delete Messages \n\t\t\t    [6] - Message Settings \n\t\t\t    [7] - Main menu\n\n";
							cout<<"\t\t\t    Select an option : ";
							cin>>s[1];
							clrscr();
									switch(s[1])
										 {
										  case 1:
												 {
												  char c[1000];
												  int p;
												  clrscr();
												  cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n\n";
												  cout<<"\t\t\t    Abc... \n\n\t\t\t        ";
												  cin>>c;
												  clrscr();
												  cout<<"\n\n\n\t\t\t    Phone number : \n\n\t\t\t\t\t ";
												  cin>>p;
													for(int i=1; i<=250; i++)
													  {
														 cout<<"\n\n\n\n\n\n\n\n\t\t\t  Requesting............";
														  clrscr();
													  }
												  cout<<"\n\n\n\n\n\n\n\n\n\t\t\a      ~~~~~~~ Request Successful ~~~~~~~ ";
												 }
												 getch();
												 goto sms;
												  break;
										  case 2:
												 {
												  clrscr();
												  int i;
													for(i=1; i<=250; i++)
													 {
														cout<<"\n\n\n\n\n    \t\t Searching.......";
														clrscr();
													 }
												  cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n";
												  cout<<"\n\n\n\n\n\t\t\t\t\a Inbox is empty ";
												 }
												 getch();
												 goto sms;
												  break;
										  case 3:
												 {
												  clrscr();
												  int i;
													for(i=1; i<=250; i++)
													 {
														cout<<"\n\n\n\n\n    \t\t Searching.......";
														clrscr();
													 }
												  cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n";
												  cout<<"\n\n\n\n\n\t\t\t\a  Sent items folder is empty ";
												 }
												 getch();
												 goto sms;
												  break;
										  case 4:
												 {
												  clrscr();
												  int i;
													for(i=1; i<=250; i++)
													 {
														cout<<"\n\n\n\n\n    \t\t Searching.......";
														clrscr();
													 }
												  cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n";
												  cout<<"\n\n\n\n\n\t\t\t\a   Drafts folder is empty ";
												 }
												 getch();
												 goto sms;
												  break;
										  case 5:
												 {
												  int d[6];
												  clrscr();
												  cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n";
												  cout<<"\t\t\t   ***** Delete Messages *****\n\t\t\t   ___________________________";
												  cout<<"\n\n\t\t\t   [1] - Inbox \n\t\t\t   [2] - Sent Items \n\t\t\t   [3] - Drafts\n\n";
												  cout<<"\t\t\t   Select an option : ";
												  cin>>d[0];
													clrscr();
														 switch(d[0])
																{
																 case 1:
																	  {
																	  cout<<"\n\n\n\t\t\t[1] - One by One\n\t\t\t[2] - All read\n\t\t\t";
																	  cin>>d[1];
																		  clrscr();
																			 switch(d[1])
																					 {
																					  case 1:
																							 {
																							 cout<<"\n\n\n\t\t\t     \aInbox is empty";
																							 }
																							 getch();
																							 goto sms;
																							 break;
																					  case 2:
																							 {
																							 cout<<"\n\n\n\t\t\t     \aInbox is empty";
																							 }
																							 getch();
																							 goto sms;
																							 break;
																					  default:
																							goto sms;
																					 }
																	  }
																	  break;
																 case 2:
																	  {
																	  cout<<"\n\n\n\t\t\t[1] - One by One\n\t\t\t[2] - All read\n\t\t\t";
																	  cin>>d[2];
																		  clrscr();
																			 switch(d[2])
																					 {
																					  case 1:
																							 {
																							 cout<<"\n\n\n\t\t     \aSent items folder is empty";
																							 }
																							 getch();
																							 goto sms;
																							 break;
																					  case 2:
																							 {
																							 cout<<"\n\n\n\t\t     \aSent items folder is empty";
																							 }
																							 getch();
																							 goto sms;
																							 break;
																						default:
																							 goto sms;
																					  }
																	  }
																	  break;
																 case 3:
																	  {
																	  cout<<"\n\n\t\t\t[1] - One by One\n\t\t\t[2] - All read\n\t\t\t";
																	  cin>>d[3];
																		  clrscr();
																			 switch(d[3])
																					 {
																					  case 1:
																							 {
																							 cout<<"\n\n\n\t\t     \aDrafts folder is empty";
																							 }
																							 getch();
																							 goto sms;
																							 break;
																					  case 2:
																							 {
																							 cout<<"\n\n\n\t\t     \aDrafts folder is empty";
																							 }
																							 getch();
																							 goto sms;
																							 break;
																						 default:
																						 goto sms;
																					  }
																	  }
																	  break;
																default:
																goto sms;
																}
												 }
												  break;
										  case 6:
												 {
												 clrscr();
												 cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n";
												 cout<<"\t\t\t  ***** Message Settings *****\n\t\t\t  ____________________________";
												 cout<<"\n\n\t\t\t  [1] - Templates\n\t\t\t  [2] - Smileys\n\t\t\t  [3] - Signature\n\t\t\t  [4] - Sending profile\n\t\t\t  [5] - Delivery report\n";
												 }
												 getch();
												 goto sms;
												  break;
										  case 7:
												  {
												  goto main;
												  }
												  break;
											default:
											goto main;
										 }
						  }
							break;
					case 2:
						  {
						  cnts:
							clrscr();
							  cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n";
							  cout<<"\t\t\t    ***** Contacts *****\n\t\t\t    ____________________\n\n";
							  cout<<"\t\t\t    [1] - Search \n\t\t\t    [2] - Add contacts \n\t\t\t    [3] - Copy \n\t\t\t    [4] - Delete \n\t\t\t    [5] - Setting \n\t\t\t    [6] - Speed dials\n\t\t\t    [7] - Main menu \n\n";
							  cout<<"\t\t\t    Select an option : ";
							  cin>>s[2];
							  clrscr();
							  switch(s[2])
										 {
											case 1:
												  {
												  char c[20];
												  cout<<"\n\n\n\t\t\tContact name : ";
												  cin>>c;
												  clrscr();
												  cout<<"\n\n\n\t\t\t\t  \aNo match\n";
												  }
												  getch();
												  goto cnts;
												  break;
											case 2:
												  {
												  char n[20];
												  int c;
												  cout<<"\n\n\n\t\t\tContact name : ";
												  cin>>n;
												  clrscr();
												  cout<<"\n\n\n\t\t\tNumber : ";
												  cin>>c;
												  clrscr();
												  cout<<"\n\n\n\t\t\t\asaved\n";
												  }
												  getch();
												  goto cnts;
												  break;
											case 3:
												  {
												  cout<<"\n\n\t\t\t    ***** Copy *****\n\t\t\t    ________________";
												  cout<<"\n\n\t\t\t    [1] - From SIM card to phone\n\t\t\t    [2] - From phone to SIM card\n";
												  }
												  getch();
												  goto cnts;
													break;
											case 4:
												  {
												  cout<<"\n\n\t\t\t    ***** Delete *****\n\t\t\t    __________________";
												  cout<<"\n\n\t\t\t    [1] - One by one\n\t\t\t    [2] - Delete all\n";
												  }
												  getch();
												  goto cnts;
												  break;
											case 5:
												  {
												  cout<<"\n\n\t\t\t    ***** Settings ******\n\t\t\t    ____________________";
												  cout<<"\n\n\t\t\t    [1] - Multi-Phonebook\n\t\t\t    [2] - Memory in use\n\t\t\t    [3] - Contacts view\n\t\t\t";
												  }
												  getch();
												  goto cnts;
												  break;
											case 6:
												  {
												  int sd[2];
												  cout<<"\n\n\t\t\t    ***** Speed dials *****\n\t\t\t    _______________________";
												  cout<<"\n\n\t\t\t    [1] - On\n\t\t\t    [2] - Off\n\t\t\t    ";
												  cin>>sd[0];
												  clrscr();
														  switch(sd[0])
																	 {
																			case 1:
																					{
																					cout<<"\n\n\n\t\t\t\t \aSpeed dialling on";
																					}
																					getch();
																					goto cnts;
																					break;
																			case 2:
																					{
																					cout<<"\n\n\n\t\t\t\t \aSpeed dialling off";
																					}
																					getch();
																					goto cnts;
																					break;
																	 default:
																	 goto cnts;
																	 }
												  }
													break;
											case 7:
												  {
												  goto main;
												  }
												  break;
										  default:
												 goto main;
										 }
						  }
							break;
					case 3:
						  {
						  cr:
							clrscr();
							int c[2];
							 cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n\t\t\t    ***** Call Register *****\n\t\t\t    _________________________\n\n";
							 cout<<"\t\t\t    [1] - Missed calls \n\t\t\t    [2] - Received calls \n\t\t\t    [3] - Dialled numbers \n\t\t\t    [4] - Delete recent call lists \n\t\t\t    [5] - Main menu \n\n";
							 cout<<"\t\t\t    Select an option : ";
							 cin>>c[0];
							  clrscr();
							  switch(c[0])
										 {
											case 1:
												  {
												  cout<<"\n\n\n\t\t\t     \a No numbers";
												  }
												  getch();
												  goto cr;
												  break;
											case 2:
												  {
												  cout<<"\n\n\n\t\t\t     \a No numbers";
												  }
												  getch();
												  goto cr;
												  break;
											case 3:
												  {
												  cout<<"\n\n\n\t\t\t     \a No numbers";
												  }
												  getch();
												  goto cr;
												  break;
											case 4:
												  {
												  int d[2];
												  cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n\t\t\t    ***** Delete *****\n\t\t\t    __________________";
												  cout<<"\n\n\t\t\t    [1] - All\n\t\t\t    [2] - Missed\n\t\t\t    [3] - Received\n\t\t\t    [4] - Dialled\n\n";
												  cout<<"\t\t\t    Select an option : ";
												  cin>>d[0];
														 clrscr();
														 switch(d[0])
																  {
																case 1:
																	  {
																	  for(int i=1; i<=250; i++)
																		  {
																		  cout<<"\n\n\n\n\n\n\t\t\t\t Requesting.........";
																		  clrscr();
																		  }
																	  cout<<"\n\n\n\n\n\n\t\t\t      \a All calls deleted";
																	  }
																	  getch();
																	  goto cr;
																	  break;
																case 2:
																	  {
																	  for(int i=1; i<=250; i++)
																		  {
																		  cout<<"\n\n\n\n\n\n\t\t\t\t Requesting.........";
																		  clrscr();
																		  }
																	  cout<<"\n\n\n\n\n\n\t\t\t      \a Missed calls deleted";
																	  }
																	  getch();
																	  goto cr;
																	  break;
																case 3:
																	  {
																	  for(int i=1; i<=250; i++)
																		  {
																		  cout<<"\n\n\n\n\n\n\t\t\t\t Requesting.........";
																		  clrscr();
																		  }
																	  cout<<"\n\n\n\n\n\n\t\t\t      \a Received calls deleted";
																	  }
																	  getch();
																	  goto cr;
																	  break;
																case 4:
																	  {
																	  for(int i=1; i<=250; i++)
																		  {
																		  cout<<"\n\n\n\n\n\n\t\t\t\t Requesting.........";
																		  clrscr();
																		  }
																	  cout<<"\n\n\n\n\n\n\t\t\t      \a Dialled calls deleted";
																	  }
																	  getch();
																	  goto cr;
																	  break;
																  default:
																  goto cr;
																  }
												  }
												  break;
											case 5:
												  {
												  goto main;
												  }
												  break;
										 default:
										 goto main;
										 }
						  }
						  break;
					case 4:
						  {
						  s:
						  int s[2];
						  clrscr();
							cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n\t\t\t    ***** Settings *****\n\t\t\t    ____________________\n";
							cout<<"\n\t\t\t    [1] - Tone settings \n\t\t\t    [2] - Display settings \n\t\t\t    [3] - Profiles \n\t\t\t    [4] - Time settings \n\t\t\t    [5] - Call settings \n\t\t\t    [6] - Phone settings \n\t\t\t    [7] - Main menu\n \n";
							cout<<"\t\t\t    Select an option : ";
							cin>>s[0];
							clrscr();
							  switch(s[0])
										 {
											case 1:
												  {
												  cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n";
												  cout<<"\n\n\t\t\t    ***** Tone settings *****\n\t\t\t    _________________________\n\n\n\t\t\t\t (empty)\n\t\t\t\t (empty)\n\t\t\t\t (empty)";
												  }
												  getch();
												  goto s;
												  break;
											case 2:
												  {
												  int dp[2];
													cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n\t\t\t    ***** Display settings *****\n\t\t\t    ____________________________";
													cout<<"\n\n\t\t\t    [1] - Power saver clock \n\t\t\t    [2] - Cell info display \n\t\t\t    [3] - Backlight time \n\t\t\t    [4] - Screen saver \n";
													cout<<"\n\t\t\t    Select an option : ";
													cin>>dp[0];
														 clrscr();
														 switch(dp[0])
																  {
																  case 1:
																		 {
																		 cout<<"\n\t\t\t    ***** Power saver clock *****\n\t\t\t    _____________________________";
																		 cout<<"\n\n\n\t\t\t    [1] - Digital clock\n\t\t\t    [2] - Classic clock\n\t\t\t    [3] - Off";
																		 }
																		 getch();
																		 goto s;
																		 break;
																  case 2:
																		 {
																		 cout<<"\n\n\t\t\t    ***** Cell info display *****\n\t\t\t    _____________________________";
																		 cout<<"\n\n\n\t\t\t    [1] - On\n\t\t\t    [2] - Off";
																		 }
																		 getch();
																		 goto s;
																		 break;
																  case 3:
																		 {
																		 cout<<"\n\n\t\t\t    ***** Backlight time *****\n\t\t\t    __________________________";
																		 cout<<"\n\n\n\t\t\t    [1] - Normal\n\t\t\t    [2] - Extended\n\t\t\t    [3] - Off";
																		 }
																		 getch();
																		 goto s;
																		 break;
																  case 4:
																		 {
																		 int ss[2];
																		 cout<<"\n\t\t\t    ***** Screen saver *****\n\t\t\t    ________________________";
																		 cout<<"\n\n\t\t\t\t    [1] - On\n\t\t\t\t    [2] - Off\n\t\t\t\t    [3] - Time out";
																		 cin>>ss[0];
																		 clrscr();
																			  switch(ss[0])
																					 {
																					 case 1:
																							{
																							cout<<"\n\n\n\t\t\t    \aDone";
																							}
																							getch();
																							goto s;
																							break;
																					 case 2:
																							{
																							cout<<"\n\n\n\t\t\t    \aDone";
																							}
																							getch();
																							goto s;
																							break;
																					 case 3:
																							{
																							cout<<"\n\n\t\t\t    ***** Time out *****\n\t\t\t    ____________________\n\n\t\t\t    [1] - 5 Seconds\n\t\t\t    [2] - 20 Seconds\n\t\t\t    [3] - 1 Minut\n\t\t\t    [4] - 2 Minutes\n\t\t\t    [5] - 5 Minutes\n\t\t\t    [6] - 10 Minutes";
																							}
																							getch();
																							goto s;
																							break;
																					 default:
																					 goto s;
																					 }
																		 }
																		 break;

																  }
												  }
												  break;
											case 3:
												  {
												  int p[2];
												  cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n\t\t\t    ***** Profile *****\n\t\t\t    ___________________";
												  cout<<"\n\n\t\t\t    [1] - General\n\t\t\t    [2] - Silent\n\t\t\t    [3] - Loud\n\t\t\t    [4] - Lights only\n\t\t\t    [5] - My style\n\t\t\t    [6] - Main menu\n\n";
												  cout<<"\t\t\t    Select an option : ";
												  cin>>p[0];
												  clrscr();
														switch(p[0])
																 {
																  case 1:
																		 {
																		 cout<<"\n\t\t\t    ***** General *****\n\t\t\t    ___________________\n";
																		 cout<<"\n\t\t\t    [1] - Activate\n\t\t\t    [2] - Personalise";
																		 }
																		 getch();
																		 goto s;
																		 break;
																  case 2:
																		 {
																		 cout<<"\n\t\t\t    ***** Silent *****\n\t\t\t    __________________\n";
																		 cout<<"\n\t\t\t    [1] - Activate\n\t\t\t    [2] - Personalise";
																		 }
																		 getch();
																		 goto s;
																		 break;
																  case 3:
																		 {
																		 cout<<"\n\t\t\t    ***** Loud *****\n\t\t\t    ________________\n";
																		 cout<<"\n\t\t\t    [1] - Activate\n\t\t\t    [2] - Personalise";
																		 }
																		 getch();
																		 goto s;
																		 break;
																  case 4:
																		 {
																		 cout<<"\n\t\t\t    ***** Lights only *****\n\t\t\t    _______________________\n";
																		 cout<<"\n\t\t\t    [1] - Activate\n\t\t\t    [2] - Personalise";
																		 }
																		 getch();
																		 goto s;
																		 break;
																  case 5:
																		 {
																		 cout<<"\n\t\t\t    ***** My style *****\n\t\t\t    ____________________\n";
																		 cout<<"\n\t\t\t    [1] - Activate\n\t\t\t    [2] - Personalise";
																		 }
																		 getch();
																		 goto s;
																		 break;
																  case 6:
																		 {
																		 goto main;
																		 }
																		 getch();
																		 goto s;
																		 break;
																 default:
																		 goto s;
																 }
												  }
												  break;
											case 4:
												  {
												  int t[2];
													 cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n\t\t\t    ***** Time settings *****\n\t\t\t    ________________________\n";
													 cout<<"\n\n\t\t\t    [1] - Clock\n\t\t\t    [2] - Date settings\n\t\t\t    [3] - Calendar type\n";
													 cout<<"\n\n\t\t\t    Select an option : ";
													 cin>>t[0];
													 clrscr();
														  switch(t[0])
																 {
																 case 1:
																		{
																		cout<<"\n\n\t\t\t    ***** Clock *****\n\t\t\t    _________________\n\n\t\t\t    [1] - Set the time\n\t\t\t    [2] - Time format";
																		}
																		getch();
																		goto s;
																		break;
																 case 2:
																		{
																		cout<<"\n\n\t\t\t    Date :\n\t\t\t    ______\n\n\t\t\t\t  00.00.0000\n";
																		}
																		getch();
																		goto s;
																		break;
																 case 3:
																		{
																		cout<<"\n\n\t\t\t    ***** Calendar type *****\n\t\t\t    _________________________\n\n\t\t\t    [1] - Auto-select\n\t\t\t    [2] - Gregorian\n\t\t\t    [3] - Persian\n\t\t\t    [4] - Hijri\n";
																		}
																		getch();
																		goto s;
																		break;
																  default:
																		goto s;
																  }
												  }
													break;
											case 5:
												  {
													cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n\t\t\t    ***** Call settings *****\n\t\t\t    _________________________\n";
													cout<<"\n\n\t\t\t    [1] - Call divert\n\t\t\t    [2] - Automatic redial\n\t\t\t    [3] - Call waiting service\n\t\t\t    [4] - Send my caller identity\n\t\t\t    [5] - No.screening\n";
												  }
												  getch();
												  goto s;
												  break;
											case 6:
												  {
												  int p[2];
												  cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n\n\t\t\t    ***** Phone settings *****\n\t\t\t    __________________________\n";
												  cout<<"\n\n\t\t\t    [1] - Language\n\t\t\t    [2] - Keyguard settings\n\t\t\t    [3] - Network selection\n\t\t\t    [4] - Start-up tone\n\t\t\t    [5] - Welcome note\n";
												  cout<<"\n\t\t\t    Select an option : ";
												  cin>>p[0];
												  clrscr();
													  switch(p[0])
																{
																 case 1:
																		{
																		cout<<"\n\n\t\t\t    ***** Language *****\n\t\t\t    ____________________\n\n\t\t\t    [1] - English\n\t\t\t    [2] - Arabic\n\t\t\t    [3] - Urdu\n";
																		}
																		getch();
																		goto s;
																		break;
																 case 2:
																		{
																		cout<<"\n\n\t\t\t    ***** Keyguard settings *****\n\t\t\t    _____________________________\n\n\t\t\t    [1] - Automatic keyguard\n\t\t\t    [2] - Keyguard code\n";
																		}
																		getch();
																		goto s;
																		break;
																 case 3:
																		{
																		cout<<"\n\n\t\t\t    ***** Netw. selection *****\n\t\t\t    ___________________________\n\n\t\t\t    [1] - Automatic\n\t\t\t    [2] - Manual\n";
																		}
																		getch();
																		goto s;
																		break;
																 case 4:
																		{
																		cout<<"\n\n\t\t\t    ***** Start-up tone *****\n\t\t\t    _________________________\n\n\t\t\t    [1] - On\n\t\t\t    [2] - Off";
																		}
																		getch();
																		goto s;
																		break;
																 case 5:
																		{
																		char w[20];
																		cout<<"\n\n\t\t\t    abc...\n\n\t\t\t       ";
																		cin>>w;
																		clrscr();
																		cout<<"\n\n\n\n\t\t\t\t\aDone";
																		}
																		getch();
																		goto s;
																		break;
																 default:
																  goto s;
																 }
													}
													break;
											case 7:
												  {
												  goto main;
												  }
												  break;
										 default:
											  goto main;
										 }
						  }
						  break;
					case 5:
						  {

											  int n,t,ans;
											  int w=0;
											  char a;
											  clrscr();
											  cout<<"\n!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!\n\n\n\n\n\n\t\t\aDo you want to practice some table ? (Y/N) : ";
											  cin>>a;
											  ab:
											  clrscr();
											  if(a=='y'||a=='Y')
											  cout<<"\n!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!\n\n\n\n\n\n\t\t\t\tWhich table ? ";
											  cin>>t;
											  clrscr();
											  cout<<"\n!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!'!\n\n";
												  for(n=1; n<=10; n++)
													  {
														cout<<"\t\t\t\t\t"<<t<<"*"<<n<<"=";
														cin>>ans;
														if(ans!=t*n)
																  {
																  cout<<"\t\t\t\t\t\aWrong! "<<t<<"*"<<n<<"="<<t*n<<"\n";
																  w++;
																  }
													  }
														switch(w)
																  {
																  case 0:
																		  {
																			cout<<"\n\a I'm proud of you! No wrong answer found practising table of "<<t<<"!.";
																		  }
																			break;
																  case 1:
																		  {
																			cout<<"\n\a Good work! You gave only "<<w<<" wrong answers doing table of "<<t<<"!.";
																			w=w*0;
																		  }
																			break;
																  case 2:
																		  {
																			cout<<"\n\a Good work! You gave only "<<w<<" wrong answers doing table of "<<t<<"!.";
																			w=w*0;
																		  }
																			break;
																  case 3:
																		  {
																			cout<<"\n\a Good work! You gave only "<<w<<" wrong answers doing table of "<<t<<"!.";
																			w=w*0;
																		  }
																			break;
																  case 4:
																		  {
																			cout<<"\n\a Can't you do a lot better? "<<w<<" wrong anwers found doing table of "<<t<<"!.";
																			w=w*0;
																		  }
																			break;
																	  default :
																	  cout<<"\n\a Practise a little more. You gave "<<w<<" wrong answers doing table "<<t<<"!.";
																	  w=w*0;
																  }
													  cout<<"\n\n\t\t\t\aDo you want to practise again (Y/N)";
													  cin>>a;
													  if(a=='y'||a=='Y')
															goto ab;
													  else
															goto main;

						  }
						  break;
					case 6:
						  {
						  c:
						  int e[2];
							cout<<"\n\t\t\t!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!\n";
							cout<<"\t\t\t    ***** Extras *****\n\t\t\t    __________________";
							cout<<"\n\n\t\t\t    [1] - Calculator\n\t\t\t    [2] - Converter\n\t\t\t    [3] - Calendar\n\t\t\t    [4] - Main menu\n";
							cout<<"\n\t\t\t    Select an option : ";
							cin>>e[0];
							clrscr();
								 switch(e[0])
										 {
											case 1:
												  {
												  calc:
												  float a,b,s;
												  int op;
														clrscr();
														cout<<"\n\n\n\t\t\t********** CALCULATOR **********\n\t\t\t________________________________\n\n";
														cout<<"\t\t\tEnter Number A\a :";
														cin>>a;
														cout<<"\t\t\tEnter Number B\a :";
														cin>>b;
														cout<<"\n\t[1] - Addition\t\t\t[2] - Subtraction\n\t";
														cout<<"[3] - Division\t\t\t[4] - Multiplication\n\t";
														cout<<"[5] - Square of A\t\t[6] - Square of B\t";
														cout<<"\n\t[7] - Square root of 'A'\t[8] - Square root of 'B'";
														cout<<"\n\t[9] - Sin of 'A' \t\t[10] - Sin of 'B' ";
														cout<<"\n\t[11] - Cos of 'A' \t\t[12] - Cos of 'B' ";
														cout<<"\n\t[13] - Tan of 'A' \t\t[14] - Tan of 'B' ";
														cout<<"\n\t\tPress 0 for Quit to Main Menu";
														cout<<"\n\n\tEnter Choice\a :";
														cin>>op;
															clrscr();
																switch(op)
																		 {
																		  case 1:
																				 {
																				  s=a+b;
																				  cout<<"\n\n\n\t\t\t\t***** Sum *****\n\n\t\t\t\t\a  "<<a<<"+"<<b<<" = "<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		  case 2:
																				 {
																				  s=a-b;
																				  cout<<"\n\n\n\t\t\t\t***** Difference *****\n\n\t\t\t\t\a  "<<a<<"-"<<b<<" = "<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		  case 3:
																				 {
																				  s=a/b;
																				  cout<<"\n\n\n\t\t\t\t***** Quotient *****\n\n\t\t\t\t\a  "<<a<<"/"<<b<<" = "<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		  case 4:
																				 {
																				  s=a*b;
																				  cout<<"\n\n\n\t\t\t\t***** Product *****\n\n\t\t\t\t\a  "<<a<<"*"<<b<<" = "<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		  case 5:
																				 {
																				  s=a*a;
																				  cout<<"\n\n\n\t\t\t\t***** Square *****\n\n\t\t\t\t\a  "<<a<<"^2"<<" = "<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		  case 6:
																				 {
																				  s=b*b;
																				  cout<<"\n\n\n\t\t\t\t***** Square *****\n\n\t\t\t\t\a  "<<b<<"^2"<<" = "<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		  case 7:
																				 {
																				  s=sqrt(a);
																				  cout<<"\n\n\n\t\t\t\t***** Square root *****\n\n\t\t\t\t\aThe square root of "<<a<<"="<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		  case 8:
																				 {
																				  s=sqrt(b);
																				  cout<<"\n\n\n\t\t\t\t***** Square root *****\n\n\t\t\t\t\aThe square root of "<<b<<"="<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		  case 9:
																				 {
																				  s=sin(a);
																				  cout<<"\n\n\n\t\t\t\t ***** Answer ***** \n\n\t\t\t\t\a Sin ("<<a<<") = "<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		  case 10:
																				 {
																				  s=sin(b);
																				  cout<<"\n\n\n\t\t\t\t ***** Answer ***** \n\n\t\t\t\t\a Sin ("<<b<<") = "<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		  case 11:
																				 {
																				  s=cos(a);
																				  cout<<"\n\n\n\t\t\t\t ***** Answer ***** \n\n\t\t\t\t\a Cos ("<<a<<") = "<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		  case 12:
																				 {
																				  s=cos(b);
																				  cout<<"\n\n\n\t\t\t\t ***** Answer ***** \n\n\t\t\t\t\a Cos ("<<b<<") = "<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		 case 13:
																				 {
																				  s=tan(a);
																				  cout<<"\n\n\n\t\t\t\t ***** Answer ***** \n\n\t\t\t\t\a Tan ("<<a<<") = "<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		 case 14:
																				 {
																				  s=tan(b);
																				  cout<<"\n\n\n\t\t\t\t ***** Answer ***** \n\n\t\t\t\t\a Tan ("<<b<<") = "<<s;
																				 }
																				 getch();
																				 goto calc;
																				 break;
																		 default:
																			goto main;
																		 }
												  }
												  break;
											case 2:
												  {
												  cnvr:
												  clrscr();
												  int c[1];
												  cout<<"\n\n\n\t\t\t********** Converter **********\n\t\t\t_______________________________\n";
												  cout<<"\n\n\t\t\t     [1] - Temperature\n\t\t\t     [2] - Weight\n\t\t\t     [3] - Length\n\t\t\t     [4] - Area\n\t\t\t     [5] - Back\n\n";
												  cout<<"\t\t\t     Select an option : ";
												  cin>>c[0];
												  clrscr();
														switch(c[0])
																		 {
																		 case 1:
																				{
																				int t[1];
																				float f,c,k;
																				cout<<"\n\n\n\t\t\t\tTemperature\n\t\t\t\t___________\n";
																				cout<<"\n\n\t\t\t     [1] - Fahrenheit (F) to Celsius (C)\n\t\t\t     [2] - Celsius (C) to Fahrenheit (F)\n\t\t\t     [3] - Kelvin (K) to Fahrenheit (F)\n\t\t\t     [4] - Fahrenheit (F) to Kelvin (K)\n\t\t\t     [5] - Celsius (C) to Kelvin (K)\n\t\t\t     [6] - Kelvin (K) to Celsius (C)";
																				cout<<"\n\n\t\t\t     Select an option : ";
																				cin>>t[0];
																				clrscr();
																					 switch(t[0])
																							 {
																							 case 1:
																									{
																									cout<<"\n\n\t\t\tFahrenheit (F) to Celsius (C)\n\t\t\t_____________________________\n";
																									cout<<"\n\t\t\tFahrenheit (F) : ";
																									cin>>f;
																									c=(f-32)*5/9;
																									cout<<"\n\n\n\t\t\tCelsius (C) : \a"<<c;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 2:
																									{
																									cout<<"\n\n\t\t\tCelsius (C) to Fahrenheit (F)\n\t\t\t_____________________________\n";
																									cout<<"\n\t\t\tCelsius (C) : ";
																									cin>>c;
																									f=(c*9/5)+32;
																									cout<<"\n\n\n\t\t\tFahrenheit (F) : \a"<<f;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 3:
																									{
																									cout<<"\n\n\t\t\tKelvin (K) to Fahrenheit (F)\n\t\t\t____________________________\n";
																									cout<<"\n\t\t\tKelvin (K) : ";
																									cin>>k;
																									f=(k-273.15)*9/5+32;
																									cout<<"\n\n\n\t\t\tFahrenheit (F) : \a"<<f;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 4:
																									{
																									cout<<"\n\n\t\t\tFahrenheit (F) to Kelvin (K)\n\t\t\t____________________________\n";
																									cout<<"\n\t\t\tFahrenheit (F) : ";
																									cin>>f;
																									k=(f-32)*5/9+273.15;
																									cout<<"\n\n\n\t\t\tKelvin (K) : \a"<<k;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 5:
																									{
																									cout<<"\n\n\t\t\tCelsius (C) to Kelvin (K)\n\t\t\t_________________________\n";
																									cout<<"\n\t\t\tCelsius (C) : ";
																									cin>>c;
																									k=c+273.15;
																									cout<<"\n\n\n\t\t\t Kelvin (K) : \a"<<k;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 6:
																									{
																									cout<<"\n\n\t\t\tKelvin (K) to Celsius (C)\n\t\t\t_________________________\n";
																									cout<<"\n\t\t\tKelvin (K) : ";
																									cin>>k;
																									c=k-273.15;
																									cout<<"\n\n\n\t\t\tCelsius (C) : \a"<<c;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 }

																				}
																				break;
																		 case 2:
																				{
																				clrscr();
																				float k,p,g,o;
																				int w;
																				cout<<"\n\n\n\t\t\t\tWieght\n\t\t\t\t______\n";
																				cout<<"\n\n\t\t\t    [1] - Pounds to Kilograms\n\t\t\t    [2] - Kilograms to Pounds\n\t\t\t    [3] - Pounds to Grams\n\t\t\t    [4] - Grams to Pounds\n\t\t\t    [5] - Ounces to Grams\n\t\t\t    [6] - Grams to Ounce\n";
																				cout<<"\n\t\t\t    Select an option : ";
																				cin>>w;
																				clrscr();
																					  switch(w)
																							 {
																							 case 1:
																									{
																									 cout<<"\n\n\t\t\t   Pounds to Kilograms\n\t\t\t   ___________________";
																									 cout<<"\n\n\t\t\tPounds : ";
																									 cin>>p;
																									 k=p/2.205;
																									 cout<<"\n\n\t\t\tKilograms : \a"<<k;
																									 }
																									 getch();
																									 goto cnvr;
																									 break;
																							 case 2:
																									{
																									 cout<<"\n\n\t\t\t   Kilograms to Pounds\n\t\t\t   ___________________";
																									 cout<<"\n\n\t\t\tKilograms : ";
																									 cin>>k;
																									 p=k*2.205;
																									 cout<<"\n\n\t\t\tPounds : \a"<<p;
																									 }
																									 getch();
																									 goto cnvr;
																									 break;
																							 case 3:
																									{
																									cout<<"\n\n\t\t\t   Pounds to Grams\n\t\t\t   _______________";
																									cout<<"\n\n\t\t\tPounds : ";
																									cin>>p;
																									g=p/0.002205;
																									cout<<"\n\n\t\t\tGrams : \a"<<g;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 4:
																									{
																									cout<<"\n\n\t\t\t   Grams to Pounds\n\t\t\t   _______________";
																									cout<<"\n\n\t\t\tGrams : ";
																									cin>>g;
																									p=g*0.002205;
																									cout<<"\n\n\t\t\tPounds : \a"<<p;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 5:
																									{
																									cout<<"\n\n\t\t\t   Ounces to Grams\n\t\t\t   _______________";
																									cout<<"\n\n\t\t\tOunces : ";
																									cin>>o;
																									g=o*28.349;
																									cout<<"\n\n\t\t\tGrams : \a"<<g;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 6:
																									{
																									cout<<"\n\n\t\t\t   Grams to Ounces\n\t\t\t   _______________";
																									cout<<"\n\n\t\t\tGrams : ";
																									cin>>g;
																									o=g*0.03527;
																									cout<<"\n\n\t\t\tOunces : \a"<<o;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 }
																				}
																				break;
																		 case 3:
																				{
																				float m,km,cm,i,y,me,f;
																				int l;
																				cout<<"\n\n\n\t\t\t\t   Length\n\t\t\t\t   ______\n";
																				cout<<"\n\n\t\t\t    [1] - Miles to Kilometres\n\t\t\t    [2] - Kilometres to Miles\n\t\t\t    [3] - Yards to Metres\n\t\t\t    [4] - Metres to Yards\n\t\t\t    [5] - Feet to Metres\n\t\t\t    [6] - Metres to Feet\n\t\t\t    [7] - Inches to Centimetres\n\t\t\t    [8] - Centimetres to Inches\n";
																				cout<<"\n\t\t\t    Select an option : ";
																				cin>>l;
																				clrscr();
																					  switch(l)
																							 {
																							 case 1:
																									{
																									cout<<"\n\n\t\t\t   Miles to Kilometres\n\t\t\t   ___________________\n";
																									cout<<"\n\t\t\tMiles : ";
																									cin>>m;
																									km=m*1.609;
																									cout<<"\n\n\t\t\tKilometres : \a"<<km;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 2:
																									{
																									cout<<"\n\n\t\t\t   Kilometres to Miles\n\t\t\t   ___________________\n";
																									cout<<"\n\t\t\tKilometres : ";
																									cin>>km;
																									m=km*0.6214;
																									cout<<"\n\n\t\t\tMiles : \a"<<m;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 3:
																									{
																									cout<<"\n\n\t\t\t   Yards to Metres\n\t\t\t   _______________\n";
																									cout<<"\n\t\t\tYards : ";
																									cin>>y;
																									me=y*0.9144;
																									cout<<"\n\n\t\t\tMetres : \a"<<me;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 4:
																									{
																									cout<<"\n\n\t\t\t   Metres to Yards\n\t\t\t   _______________\n";
																									cout<<"\n\t\t\tMetres : ";
																									cin>>me;
																									y=me*1.094;
																									cout<<"\n\n\t\t\tYards : \a"<<y;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 5:
																									{
																									cout<<"\n\n\t\t\t   Feet to Metres\n\t\t\t   ______________\n";
																									cout<<"\n\t\t\tFeet : ";
																									cin>>f;
																									me=f*0.3048;
																									cout<<"\n\n\t\t\tMetres : \a"<<me;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 6:
																									{
																									cout<<"\n\n\t\t\t   Metres to Feet\n\t\t\t   ______________\n";
																									cout<<"\n\t\t\tMetres : ";
																									cin>>me;
																									f=me*3.281;
																									cout<<"\n\n\t\t\tFeet : \a"<<f;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 7:
																									{
																									cout<<"\n\n\t\t\t   Inches to Centimetres\n\t\t\t   _____________________\n";
																									cout<<"\n\t\t\tInches : ";
																									cin>>i;
																									cm=i*2.54;
																									cout<<"\n\n\t\t\tCentimetres : \a"<<cm;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 case 8:
																									{
																									cout<<"\n\n\t\t\t   Centimetres to Inches\n\t\t\t   _____________________\n";
																									cout<<"\n\t\t\tCentimetres : ";
																									cin>>cm;
																									i=cm*0.3937;
																									cout<<"\n\n\t\t\tInches : \a"<<i;
																									}
																									getch();
																									goto cnvr;
																									break;
																							 }
																				}
																				break;
																		 case 4:
																				{
																				float sf,sm,si,scm,sy,smi,skm,a,h;
																				int ar;
																				cout<<"\n\n\n\t\t\t\t   Area\n\t\t\t\t   ____\n";
																				cout<<"\n\n\t\t\t    [1] - Square Feet to Square Metres\n\t\t\t    [2] - Square Metres to Square Feet\n\t\t\t    [3] - Square Inches to Square cm\n\t\t\t    [4] - Square cm to Square Inches\n\t\t\t    [5] - Square Yards to Square Metres\n\t\t\t    [6] - Square Metres to Square Yards\n\t\t\t    [7] - Square Miles to Square km\n\t\t\t    [8] - Square km to Square Miles\n\t\t\t    [9] - Acres to Hectares\n\t\t\t    [10] - Hectares to Acres\n";
																				cout<<"\n\t\t\t    Select an option : ";
																				cin>>ar;
																				clrscr();
																					switch(ar)
																							{
																							case 1:
																								  {
																								  cout<<"\n\n\t\t\t   Square Feet to Square Metres\n\t\t\t   ____________________________\n";
																								  cout<<"\n\t\t\tSquare Feet : ";
																								  cin>>sf;
																								  sm=sf*0.0929;
																								  cout<<"\n\n\t\t\tSquare Metres : \a"<<sm;
																								  }
																								  getch();
																								  goto cnvr;
																								  break;
																							case 2:
																								  {
																								  cout<<"\n\n\t\t\t   Square Metres to Square Feet\n\t\t\t   ____________________________\n";
																								  cout<<"\n\t\t\tSquare Metres : ";
																								  cin>>sm;
																								  sf=sm*10.76;
																								  cout<<"\n\n\t\t\tSquare Feet : \a"<<sf;
																								  }
																								  getch();
																								  goto cnvr;
																								  break;
																							case 3:
																								  {
																								  cout<<"\n\n\t\t\t   Square Inches to Square cm\n\t\t\t   __________________________\n";
																								  cout<<"\n\t\t\tSquare Inches : ";
																								  cin>>si;
																								  scm=si*6.452;
																								  cout<<"\n\n\t\t\tSquare cm : \a"<<scm;
																								  }
																								  getch();
																								  goto cnvr;
																								  break;
																							case 4:
																								  {
																								  cout<<"\n\n\t\t\t   Square cm to Square Inches\n\t\t\t   __________________________\n";
																								  cout<<"\n\t\t\tSquare cm : ";
																								  cin>>scm;
																								  si=scm*0.155;
																								  cout<<"\n\n\t\t\tSquare Inches : \a"<<si;
																								  }
																								  getch();
																								  goto cnvr;
																								  break;
																							case 5:
																								  {
																								  cout<<"\n\n\t\t\t   Square Yards to Square Metres\n\t\t\t   _____________________________\n";
																								  cout<<"\n\t\t\tSquare Yards : ";
																								  cin>>sy;
																								  sm=sy*0.8361;
																								  cout<<"\n\n\t\t\tSquare Metres : \a"<<sm;
																								  }
																								  getch();
																								  goto cnvr;
																								  break;
																							case 6:
																								  {
																								  cout<<"\n\n\t\t\t   Square Metres to Square Yards\n\t\t\t   _____________________________\n";
																								  cout<<"\n\t\t\tSquare Metres : ";
																								  cin>>sm;
																								  sy=sm*1.196;
																								  cout<<"\n\n\t\t\tSquare Yards : \a"<<sy;
																								  }
																								  getch();
																								  goto cnvr;
																								  break;
																							case 7:
																								  {
																								  cout<<"\n\n\t\t\t   Square Miles to Square km\n\t\t\t   _________________________\n";
																								  cout<<"\n\t\t\tSquare Miles : ";
																								  cin>>smi;
																								  skm=smi*2.589;
																								  cout<<"\n\n\t\t\tSquare km : \a"<<skm;
																								  }
																								  getch();
																								  goto cnvr;
																								  break;
																							case 8:
																								  {
																								  cout<<"\n\n\t\t\t   Square km to Square Miles\n\t\t\t   _________________________\n";
																								  cout<<"\n\t\t\tSquare km : ";
																								  cin>>skm;
																								  smi=skm*0.3861;
																								  cout<<"\n\n\t\t\tSquare Miles : \a"<<smi;
																								  }
																								  getch();
																								  goto cnvr;
																								  break;
																							case 9:
																								  {
																								  cout<<"\n\n\t\t\t   Acres to Hectares\n\t\t\t   _________________\n";
																								  cout<<"\n\t\t\tAcres : ";
																								  cin>>a;
																								  h=a*0.4047;
																								  cout<<"\n\n\t\t\tHectares : \a"<<h;
																								  }
																								  getch();
																								  goto cnvr;
																								  break;
																							case 10:
																								  {
																								  cout<<"\n\n\t\t\t   Hectares to Acres\n\t\t\t   _________________\n";
																								  cout<<"\n\t\t\tHectares : ";
																								  cin>>h;
																								  a=h*2.471;
																								  cout<<"\n\n\t\t\tAcres : \a"<<a;
																								  }
																								  getch();
																								  goto cnvr;
																								  break;
																							}
																				}
																				break;
																		 case 5:
																				{
																				goto c;
																				}
																				break;

																		 }
												  }
												  break;
											case 3:
												  {
												  goto main;
												  }
											case 4:
												  {
												  goto main;
												  }
										 }
						  }
						  break;
					case 7:
						  {
						  goto main;
						  }

					}
getch();
}