#include<iostream.h>
#include<conio.h>
main()
{
int roll[5],phy[5],che[5],mat[5],com[5];
for(int i=0;i<5;i++)
{
clrscr();
cout<<"Enter Your Roll No. =";
cin>>roll[i];
cout<<"Enter Your Physics No. =";
cin>>phy[i];
cout<<"Enter Your  Chemistry No. =";
cin>>che[i];
cout<<"Enter Your Mathematics No. =";
cin>>mat[i];
cout<<"Enter Your Computer No. =";
cin>>com[i];
}
clrscr();
cout<<"Roll #"<<" Phy "<<" Che "<<" Math "<<" Comp "<<endl;
for(int j=0;j<5;j++)
cout<<roll[j]<<"\t"<<phy[j]<<"\t"<<che[j]<<"\t"<<mat[j]<<"\t"<<com[j]<<"\n\n";
getch();
}
