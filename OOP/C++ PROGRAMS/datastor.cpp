#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int r[10],p[10],c[10],co[10],t[10],a[10];
 for(int i=1; i<=10; i++)
	 {
	 clrscr();
	 cout<<"Sr No. "<<i<<" Enter your roll no. : ";
	 cin>>r[i];
	 cout<<"Enter your physics marks : ";
	 cin>>p[i];
	 cout<<"Enter your chemistry marks : ";
	 cin>>c[i];
	 cout<<"Enter your computer marks : ";
	 cin>>co[i];
	 }
	clrscr();
	cout<<"--------------------------------------------------------------------------------\n";
	cout<<"  Sr No. |  RollNo.  |  Physics  |  Cheistry  |  Computer  |  Total  |  Average\n";
	cout<<"--------------------------------------------------------------------------------\n";
  for(int j=1; j<=10; j++)
	{
	 cout<<"    "<<j<<"          "<<r[j]<<"         "<<p[j]<<"          "<<c[j]<<"           "<<co[j]<<"         "<<p[j]+c[j]+co[j]<<"         "<<(p[j]+c[j]+co[j])/3<<endl;
	}
	cout<<"--------------------------------------------------------------------------------\n\n\n";
	cout<<"            ************************** END **************************";
 getch();
}
