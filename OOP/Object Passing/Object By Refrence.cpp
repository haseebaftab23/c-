//Object By Refrence. Value will be affected.
#include<iostream.h>
#include<conio.h>
class objpass
{
int f, i;
public:
objpass()
{
f=0;
i=0;
}
objpass (int a1, int b1)
{
f=a1;
i=b1;
}
objpass math (objpass obj)
{
objpass temp;
temp.f=obj.f+f;
temp.i=obj.i+i;
return temp;
}
void show ()
{
cout<<"Feet is="<<f<<endl;
cout<<"Inch is="<<i;
}
};
main()
{
objpass obj3;
objpass obj1(5, 6), obj2(4, 5);
obj3=obj1.math(obj2);
obj3.show();
}
