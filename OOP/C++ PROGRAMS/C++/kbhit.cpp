#include<iostream.h>
#include<conio.h>
main()
{
int r=1;
clrscr();
while(!kbhit())
{
gotoxy(30,r);
cout<<"Welcome\a";
gotoxy(30,r);
clreol();
r++;
if(r==24) r=1;
}

getch();
}