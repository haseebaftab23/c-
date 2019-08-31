#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
cout<<"*******************************************************************************"<<endl;
cout<<"*******************************************************************************"<<endl;
cout<<"**********************************/* * * * * \\*********************************"<<endl;
cout<<"*********************************/* * * * * * \\********************************"<<endl;
cout<<"********************************/* * * * * * * \\*******************************"<<endl;
cout<<"*******************************/ OBAID_US_SALAM \\******************************"<<endl;
cout<<"******************************/                  \\*****************************"<<endl;
cout<<"*****************************/     BSCS-B-II      \\****************************"<<endl;
cout<<"****************************/                      \\***************************"<<endl;
cout<<"***************************/        PU-1125         \\**************************"<<endl;
cout<<"**************************/                          \\*************************"<<endl;
cout<<"*************************/    ITM GROUP OF COLLEGES   \\************************"<<endl;
cout<<"************************/                              \\***********************"<<endl;
cout<<"***********************/            SARGODHA            \\**********************"<<endl;
cout<<"**********************/                                  \\*********************"<<endl;
cout<<"*********************/     Contact #: (0092)+3157671784   \\********************"<<endl;
cout<<"********************/                                      \\*******************"<<endl;
cout<<"*******************/           a4antivirus@ymail.com        \\******************"<<endl;
cout<<"******************/* * * * * * * * * * * * * * * * * * * * * \\*****************"<<endl;
cout<<"*****************/* * * * * * * * * * * * * * * * * * * * * * \\****************"<<endl;
cout<<"****************/* * * * * * * * * * * * * * * * * * * * * * * \\***************"<<endl;
cout<<"***************/*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\\**************"<<endl;
cout<<"*******************************************************************************"<<endl;
cout<<"*******************************************************************************"<<endl;
getch();
clrscr();
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                    ****************************************"<<endl<<"                    *                                      *"<<endl<<"                    *     PLEASE ENTER YOUR ATM CARD       *"<<endl<<"                    *                                      *"<<endl<<"                    ****************************************";
getch();
clrscr();
int a[20];
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
			  pin:
						 a[1]=1234;
						 cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                              Please insert your PIN code"<<endl<<"                              ____________________________"<<endl;
						 cin>>a[2];
						 if(a[1]==a[2])
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
						 cout<<endl<<endl<<endl<<endl<<endl<<"                    Please select the requaired transection."<<endl<<endl<<endl<<endl<<"               1 for Balence Inquairy         2 for Cash Amount"<<endl<<endl<<"               3 for Money Astatement         4 for Net Cash Price"<<endl<<endl<<"               5 for Bill Payment             6 for Change PIN Number"<<endl<<endl<<"               7 for More Facalities          8 for Teansfer Fund"<<endl;
						 cin>>a[4];
						 clrscr();
									{
									switch(a[4])
												  {
														{
														case 1:
														goto slip;
														break;
														}

														{
														case 2:
														 cout<<endl<<endl<<endl<<endl<<endl<<"                           Please select the amount"<<endl<<endl<<endl<<"                 1 for Rs. 500               2 for Rs. 1,000"<<endl<<endl<<"                 3 for Rs. 3,000             4 for Rs. 5,000"<<endl<<endl<<"                 5 for Rs. 10,000            6 for Rs. 25,000"<<endl<<endl<<"                 7 for More Amount           8 for Main Manu"<<endl;
														 cin>>a[4];
														 clrscr();
																{
																switch(a[4])
																	{
																			{
																			case 1:
																			goto slip;
																			break;
																			}

																			{
																			case 2:
																			goto slip;
																			break;
																			}

																			{
																			case 3:
																			goto slip;;
																			break;
																			}

																			{
																			case 4:
																			goto slip;
																			break;
																			}

																			{
																			case 5:
																			goto slip;
																			break;
																			}

																			{
																			case 6:
																			goto slip;
																			break;
																			}

																			{
																			case 7:
																			goto amount;
																			break;
																			}

																			{
																			case 8:
																			goto main;
																			break;
																			}
																	}
																}
														break;
														}

														{
														case 3:
														goto slip;
														break;
														}

														{
														case 4:
														amount:
													   cout<<endl<<endl<<endl<<endl<<"               Please insert/enter the amount in multipul of Rs. 500"<<endl<<endl<<endl<<endl<<"                                   Rs.";
														cin>>a[13];
														clrscr();
														if(a[13]>=500 && a[13]%500==0 && a[13]<=25000)
															{
															slip:
																cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                    Would you receive the payment slip....? "<<endl<<endl<<endl<<"                      1 for Yes           2 for No"<<endl;
																getch();
																clrscr();
																cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                   Your transection is being processed....."<<endl<<endl<<endl<<"                    Would you like to more transection...?"<<endl<<endl<<endl<<"                       1 for Yes               2 for No"<<endl;
																						cin>>a[14];
																						clrscr();
																										{
																										switch(a[14])
																											{
																														case 1:
																														{
																														goto main;
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
														break;
														}

														{
														case 5:
														cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                    1 for Telephone          2 for Electricity"<<endl<<" "<<endl<<"                    3 for Gas                4 for Card or Loan payment"<<endl<<" "<<endl<<"                    5 for Main Manu"<<endl;
														cin>>a[5];
														clrscr();
																	{
																	switch(a[5])
																			  {
																				 case 1:
																				 {
																				 cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                     1 for Warid                2 for Telenor"<<endl<<" "<<endl<<"                     3 for Ufone                4 for Jazz"<<endl<<endl<<"                     5 for Zong                 6 for PTCL"<<endl<<endl<<"                     7 for Main Manu"<<endl;
																				 cin>>a[6];
																				 clrscr();
																							 {
																							 switch(a[6])
																										{
																										 {
																										 case 7:
																										 goto main;
																										 break;
																										 }
																										}
																							  }
																				clrscr();
																				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                        Please select your account service"<<endl<<endl<<"                     1 for Post-Paid               2 for Pre-Paid"<<endl<<endl<<"                     3 for Main manu"<<endl;
																				cin>>a[7];
																							 {
																							 switch(a[7])
																										{
																											{
																											case 3:
																											goto main;
																											break;
																											}
																										}
																							}
																				break;
																				}



																				case 2:
																				{
																				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                    Please select the electricity supplier company."<<endl<<endl<<"                    1 for LESCO               2 for KESC"<<endl<<endl<<"                    3 for Main manu"<<endl;
																				cin>>a[8];
																						 {
																						 switch(a[8])
																									{
																										{
																										case 3:
																										goto main;
																										break;
																										}
																									}
																						 }
																				clrscr();
																				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                       Please enter the '13' digit account number."<<endl<<endl<<endl<<endl<<endl<<"                      1 for Main manu"<<endl;
																				cin>>a[9];
																						{
																						switch(a[9])
																								  {
																									  {
																									  case 1:
																									  goto main;
																									  break;
																									  }
																								  }
																						}
																				break;
																				}


																				case 3:
																				{
																				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                    Please select the gas supplier company."<<endl<<endl<<"                    1 for SSGC                 2 for SNGPL"<<endl<<endl<<"                    3 for Main manu"<<endl;
																				cin>>a[10];
																						{
																						switch(a[10])
																								  {
																									  {
																									  case 3:
																									  goto main;
																									  break;
																									  }
																								  }
																						 }
																				 clrscr();
																				 cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                    Please insert/enter the '10' digit customer no."<<endl<<endl<<endl<<endl<<endl<<"                    1 for Main manu"<<endl;
																				 cin>>a[11];
																						 {
																						 switch(a[11])
																									{
																										{
																										case 1:
																										goto main;
																										break;
																										}
																									}
																						  }
																				  break;
																				  }

																				  case 4:
																				  {
																				  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                   Card or Loan payment"<<endl;
																				  getch();
																				  clrscr();
																				  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                   Cradit Card "<<endl;
																				  getch();
																				  clrscr();
																				  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                   Customer account number"<<endl<<endl<<endl<<endl<<endl<<"                   1 for Main manu"<<endl;
																				  cin>>a[12];
																						  {
																						  switch(a[12])
																									 {
																										  {
																										  case 1:
																										  goto main;
																										  break;
																										  }
																									 }
																						  }
																				  break;
																				  }
																				  case 5:
																				  {
																				  goto main;
																				  break;
																				  }


																				}
																	}
																										break;
																										}










												  }
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
			  break;
			  }



			  {
			  case 'U':
			  cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                     Sorry this project is under cunstruction"<<endl<<endl<<endl<<endl<<"                           Press enter for main manu"<<endl;
			  getch();
			  clrscr();
			  goto pin;
			  break;
			  }

		 }

getch();
}