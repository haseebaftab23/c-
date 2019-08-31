#include<iostream.h>
#include<conio.h>
#include<math.h>
int fact(int z)
{
int j,f=1;
for(int i=1 ; i<=j ; i++)
f=i*j;
return f;
}

int pow(int x,int y)
{
int z;
z=pow(x,y);
cout<<z;
return z;
}



int table(int int int);
main()
{
clrscr();
int a;
cout<<"Chose Any One Option Whould You Like To Use\n";
cout<<"(1 For Factorial     2 for Power Base      3 For Table)";
cin>>a;
		switch(a)
		{
				  {
				  case 1:
						  {
						  int j;
						  cout<<"Any No. =";
						  cin>>j;
						  fact(j);
						  getch();
						  break;
						  }
				  }
				  {
				  case 2:
						  {
						  int x,y;
						  cout<<"Enter The Base =";
						  cin>>x;
						  cout<<"Enter The Power =";
						  cin>>y;
						  pow(x,y);
						  getch();
						  break;
						  }
				  }
				  {
				  case 3:
						  {
						  int t,s,e;
						  cout<<"Enter The Table Number=";
						  cin>>t;
						  cout<<"Enter The Starting Number=";
						  cin>>s;
						  cout<<"Enter The Ending Number=";
						  cin>>e;
						  table(t,s,e);
						  getch();
						  break;
						  }
				  }
		}
getch();
}








int table(int t,int s,int e)
{
int n;
for(int i=s; i<=e; i++)
n=t*i;
cout<<n;
return n;
}