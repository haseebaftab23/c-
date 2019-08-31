#include<conio.h>
#include <iostream.h>
#include <string.h>

int main()
{
const int size=30;
char name1[30], name2[30], name3[30];

cout << "Please enter the first name: ";
cin.getline(name1, size);

cout << "Please enter the second name: ";
cin.getline(name2, size);

cout << "Please enter the third name: ";
cin.getline(name3, size);

if(strcmp(name1,name2) <= 0 && strcmp(name1,name3)<=0 )
{
if(strcmp(name2,name3)<=0)
cout<<name1<<name2<<name3;
else
cout<<name1<<name3<<name2;
} // if this is not entered , it means that name1 is not the first
else if(strcmp(name2,name3)<=0)
{
if(strcmp(name1,name3)<=0)
cout<<name2<<name1<<name3;
else
cout<<name2<<name3<<name1;
}//if this is not entered , it means name3 is the first for sure
else
{
if(strcmp(name1,name2)<=0)
cout<<name3<<name1<<name2;
else
cout<<name3<<name2<<name1;
}
getch();
return 0;

}