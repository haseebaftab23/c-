#include<iostream.h>
#include<conio.h>
void main(void)
{
clrscr();
for (int i=2; i<100; i++)
        for (int j=2; j<i; j++)
        {
            if (i % j == 0) 
                break;
            else if (i == j+1)
                cout << i << " ";

        }   
	 getch();
}
