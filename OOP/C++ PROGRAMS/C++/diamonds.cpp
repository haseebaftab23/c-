#include<iostream.h>
#include<conio.h>
main()
{
int a;
cout<<"Enter a no. for printing star in diamond shape =";
cin>>a; //get max no. for printing star.
if (a%2==0)  /*condition is used if the value of a will even
					then the block of if executed otherwise the block
					of else executed.*/
  {
	 for (int i=1; i<=a-1; i+=2) /*for loop is used to print odd no. of stars
											 or diamond shape processing.*/
		{
			for (int j=a; j>=i; j-=2)  //it is used to print space.
			cout<<" ";
			for (int k=1; k<=i; k++)   //it is used to print stars.
			cout<<"*";
			cout<<endl; /*when the loop condition will false then endl manipulator
							  is executed.*/
		}
  }
else   //when the condition is false then it will be executed.
  {
	 for (int i=1; i<=a; i+=2)  //used to print stars in diamond shape processing.
		{
			for (int j=a; j>=i; j-=2) //used to print spaces.
			cout<<" ";
			for (int k=1; k<=i; k++) //used to print stars.
			cout<<"*";
			cout<<endl;
		}
  }
if (a%2==0)    /*if the condition will be true then the block of statements
					  of if will be executed.*/
  {
	 for (int l=a-3; l>=1; l-=2)  //for printing stars and space in diamond form.
		{
			for (int m=l; m<=a; m+=2) //loop for spaces.
			cout<<" ";
			for (int n=1; n<=l; n++) /*loop for stars will executed when loop for
												space will be ended.*/
			cout<<"*";
			cout<<endl;  /*when the loop for stars and spaces will be ended
								then endl manipulator will be executed.*/
		}
  }
else    /*if the condition will be false then the block of statements
					  of else will be executed.*/
  {
	 for (int l=a-2; l>=1; l-=2)  //for printing stars and space in diamond form.
		{
			for (int m=l; m<=a; m+=2) //loop for spaces.
			cout<<" ";
			for (int n=1; n<=l; n++) /*loop for stars will executed when loop for
												space will be ended.*/
			cout<<"*";
			cout<<endl;  /*when the loop for stars and spaces will be ended
								then endl manipulator will be executed.*/
		}
  }
}
