#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int n,t,ans;
int w=0;
char a;
cout<<"Do you want to practice some table ? (Y/N) : ";
cin>>a;
if(a=='y'||a=='Y')
 cout<<"Which table ? ";
 cin>>t;
 for(n=1; n<=10; n++)
  {
  cout<<t<<"*"<<n<<"=";
  cin>>ans;
  if(ans!=t*n)
	  {
	  cout<<"Wrong!  "<<t<<"*"<<n<<"= "<<t*n<<"\n";
	  w++;
	  }
  }
  switch(w)
		 {
				case 0:
					  {
						cout<<"\n I'm proud of you! No wrong answer found practising table of "<<t<<"!.";
					  }
						break;
				case 1:
					  {
						cout<<"\n Good work! You gave only "<<w<<" wrong answers doing table of "<<t<<"!.";
					  }
					  break;
				case 2:
					  {
						cout<<"\n Good work! You gave only "<<w<<" wrong answers doing table of "<<t<<"!.";
					  }
					  break;
				case 3:
					  {
						cout<<"\n Good work! You gave only "<<w<<" wrong answers doing table of "<<t<<"!.";
					  }
					  break;
				case 4:
					  {
						cout<<"\n Can't you do a lot better? "<<w<<" wrong anwers found doing table of "<<t<<"!.";
					  }
						break;
				default :
						cout<<"\n Practise a little more. You gave "<<w<<" wrong answers doing table "<<t<<"!.";
		 }
getch();
}