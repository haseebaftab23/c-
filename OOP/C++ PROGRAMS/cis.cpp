#include <iostream.h>
#include <conio.h>

main()
{
s:
clrscr();
char ch;
cout <<"\n\n\n\t\t\tEnter your input : ";
cin>>ch;
if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
cout <<"\n\n\n\t\t\tYour input " << ch << " is a character.";
else if((ch>='0')&&(ch<='9'))
cout << "\n\n\n\t\t\tYour input " << ch << " is a digit.";
else
cout <<"\n\n\n\t\t\tYour input " << ch << " is a symbol.";
getch();
goto s;
}