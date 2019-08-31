#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int arr[10],i,max;
clrscr();
for(i=0; i<10; i++)
 {
  cout<<"Enter value :";
  cin>>arr[i];
 }
 max=arr[0];
 for(i=0; i<10; i++)
 if(max<arr[i])
 max=arr[i];
 cout<<"Maximum value : "<<max;
 getch();
}