//Insertion of an object

#include<iostream.h> //Header files
#include<stdio.h>
#include<conio.h>
  struct emp       //structure employee
   {
    int empcode;
    char name[20];
    char desig[20];
    float sal;
   };
void insert(emp x,int n,int p,emp obj[]);  //function prototype
  void main()
   {
    clrscr();
    int n,p;
    emp obj[20],x;         //objects of the structure emp
    cout<<"Enter the number of records to be inputed:";
    cin>>n;
   for(int i=0;i<n;i++)
    {
     cout<<"\n\nEnter empcode:";
     cin>>obj[i].empcode;
     cout<<"Enter employee name:";
     gets(obj[i].name);
     cout<<"Enter designation:";
     gets(obj[i].desig);
     cout<<"Enter salary:";
     cin>>obj[i].sal;
    }
  cout<<"Code\tName\tDesignation\tSalary\n";
   for(i=0;i<n;i++)
    {
     cout<<obj[i].empcode<<"\t"<<obj[i].name<<"\t"<<obj[i].desig<<"\t"<<obj[i].sal<<"\n";
    }
 cout<<"Enter the position of insertion:";
  cin>>p;
 cout<<"Employee code:";
  cin>>x.empcode;
 cout<<"Employee name:";
  gets(x.name);
 cout<<"Employee designation:";
  gets(x.desig);
 cout<<"Enter salary:";
  cin>>x.sal;
   insert(x,n,p,obj);
     cout<<"Code\tName\tDesignation\tSalary\n";
      for(i=0;i<(n+1);i++)                //output of data
       {
	cout<<obj[i].empcode<<"\t"<<obj[i].name<<"\t"<<obj[i].desig<<"\t\t"<<obj[i].sal<<"\n";
	 }
 getch();
}
  void insert(emp x,int n,int p,emp obj[])     //insert function
   {
    int j;
    for(j=0;j>=p;j--)
     {
      if(p<=n)
      obj[j+1]=obj[j];
     }
    obj[p]=x;
    }
