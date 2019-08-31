#include <iostream.h>
#include <conio.h>
#include <process.h>

void main()
{
clrscr();
int num1,x;
cout << "Enter an integer : " << endl;
cin>>num1;
for(x=2;x<num1;x++)
{
if(num1%x==0)
{
cout << num1 << " is a composite number." << endl;
getch();
exit(0);
}
else
{
cout << num1 << " is a prime number." << endl;
getch();
exit(0);
}
}
}