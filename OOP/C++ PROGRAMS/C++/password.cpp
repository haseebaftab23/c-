#include<iostream.h>
#include<conio.h>
main()
   {
      clrscr();
      int a=0;
      char s[5];
      cout<<"Enter The Password\n";
      abc:
      s[a]=getch();
      cout<<"     *";
      a++;
      if(a<4)
      goto abc;
      else
      if(s[0]=='1'&& s[1]=='2'&& s[2]=='3'&&s[3]=='4')
          {
          cout<<"\nPassword Is True";
          }
      else
         {
         cout<<"\nPassword Is Wrong";
         }
getch();
}