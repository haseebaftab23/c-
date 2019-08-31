#include<iostream.h>
#include"perp.h"
using namespace std;
int m,y,i,j,l=1,k,b,c=0;
 main()
{
char w;
cout<< "Welcome to the calendar CPP project!" ;
do{
i=j=k=b=c=0;l=1; 
cout<<"\nenter mm,yyyy";
cin>>m>>y;
if((m>0)&&(m<13))
{
   cout<<"su\tmo\ttu\twe\tth\tfr\tsa\n";
   c=day();
   if(c==0)
     b=6;
   else
     b=c-1;
   for(j=1;j<=6;j++)
     {
        for(k=0;k<7;k++)
          {
	    if(c==0)
	       c=7;
	    if(c==1)
	      break;
	    cout<<("\t");
	    c--;
           }
        for(i=1;i+b<=7;i++)
           {
	     if(l<=31)
	      {
	        switch(m)
	         {
	          case 1: cout<<l<<"\t"; break;
	          case 2:if(l<29)
		           cout<<l<<"\t";
		         else if((l==29)&&(y%4==0)&&(y%100!=0))
		           cout<<l<<"\t";
		         else if((l==29)&&(y%400==0))
		           cout<<l<<"\t"; break;
	          case 3: printf("%d\t",l); break;
	          case 4:if(l<31)
		        cout<<l<<"\t"; break;
	          case 5: cout<<l<<"\t"; break;
	          case 6:if(l<31)
		        cout<<l<<"\t"; break;
	          case 7: cout<<l<<"\t"; break;
	          case 8: cout<<l<<"\t"; break;
	          case 9:if(l<31)
		          cout<<l<<"\t"; break;
	          case 10: cout<<l<<"\t"; break;
	          case 11:if(l<31)
		           cout<<l<<"\t"; break;
	          case 12:  cout<<l<<"\t"; break;
	         }
	      }
           l++;
          }
        cout<<("\n");
        b=0;
      }
}
else
cout<<"INVALID MONTH NUMBER";
cout<<"Do u want to try again? y or n \n";
cin>>w;
if ((w=='y') ||(w=='Y'))
continue ;
else if((w=='n') ||(w=='N')) 
break;

}while(1);
return 0;
}



