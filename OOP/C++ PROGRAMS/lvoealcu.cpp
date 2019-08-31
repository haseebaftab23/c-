#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

void main()	 // Execution starts from here THE MAIN FUNCTION
{
char n1[30], n2[15];	 // n1 means name1 and n2 means name2
clrscr();
textcolor(RED);
textbackground(LIGHTRED);

gotoxy(12,2);
cout<<"LOVE CALCULATOR";

gotoxy(8,8);
cout<<"Enter Your Name :";
gotoxy(8,10);
cout<<"Enter Crush Name :";

gotoxy(28,8);
gets(n1);
gotoxy(28,10);
gets(n2);
strcat(n1,n2);	// copying name2 into name1
for(int i=0; i<strlen(n1); i++)	 // Converting all letter to uppercase
n1[i]=toupper(n1[i]);
for(int k=0; k<strlen(n1); k++)	 // Eliminating common letters
{
for(int i=0; i<strlen(n1); i++)
{
for(int j=0; j<strlen(n1); j++)
{
if(i==j)
continue;
else if(n1[i]==n1[j])
n1[j]=n1[j+1];
}
}
}

int sum=0;
for(int l=0; l<strlen(n1); l++)	// Assining ASCII value to each letter A=65, B=66 and so on 
sum+=n1[l];
gotoxy(8,15);
cout<<"LOVE COMPATIBILITY : ";
randomize();
for(int p=0; p<150; p++)	 // Generating random percentage for a while
{
gotoxy(31,15);
cout<<random(100)<<" %";
delay(30);
}
gotoxy(31,15);	 // Giving the actual Percentage
cout<<sum%101<<" % GUARANTEED !";
getch();	 // Holds screen until a key is pressed

}