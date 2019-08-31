#include<iostream.h>
#include<conio.h>
void main(void)
{
clrscr();
int a[11];
cout<<"Enter The 1st Value=";
cin>>a[1];
cout<<"Enter The 2nd Value=";
cin>>a[2];
cout<<"Enter The 3rd Value=";
cin>>a[3];
cout<<"Enter The 4th Value=";
cin>>a[4];
cout<<"Enter The 5th Value=";
cin>>a[5];
cout<<"Enter The 6th Value=";
cin>>a[6];
cout<<"Enter The 7th Value=";
cin>>a[7];
cout<<"Enter The 8th Value=";
cin>>a[8];
cout<<"Enter The 9th Value=";
cin>>a[9];
cout<<"Enter The 10th Value=";
cin>>a[10];
float sum=a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]+a[10],avrg=sum/10;
cout<<"Sum of given values="<<sum<<endl;
cout<<"average="<<avrg;
getch();
}
