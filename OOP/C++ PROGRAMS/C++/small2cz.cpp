#include<iostream.h>
char changecase(char c)
{
char change;
if(65<=c&&c<=90)
change=c+32;
else if(97<=c&&c<=122)
change=c-32;
else
{
cout<<"\ninvalid input\n";
return 0;
}
return change;
};
void main()
{
char c,change;
cout<<"\nenter the alphabet : ";
cin>>c;
change=changecase(c);
if(change!=0)
cout<<"\nafter changing the case :"<<change<<"\n";
}