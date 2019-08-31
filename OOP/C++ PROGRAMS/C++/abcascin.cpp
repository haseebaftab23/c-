#include <iostream.h>
#include <conio.h>

void main()
{
char alphabet='a';
char up_alphabet='A';
int ascii;
for(int i=1;i<=26;i++)
{
  ascii=alphabet;
  cout<<alphabet<<" : "<<ascii<<"   ";
  ascii=up_alphabet;
  cout<<up_alphabet<<" : "<<ascii;
  alphabet++;
  up_alphabet++;
  cout<<endl;
  if(i==13)
      {
       cout<<"\n\nPress any key to view other 13 codes";
       getch();
       clrscr();
       }
 }
getch();
}
