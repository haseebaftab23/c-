                    //OVERLOADING ARITHMETIC OPERATOR
                    
                    
//Write a program that overloads arithmetic addition operator to work with user-defined objects.


#include<iostream.h>
#include<conio.h>
class arithmetic
{
	private:
	int a,b;
	public:
	arithmetic()
	{
		a=0;
		b=0;
	}
	void geter()
	{
		cout<<"Enter A : ";
		cin>>a;
		cout<<"Enter B : ";
		cin>>b;
	}
	void display()
	{
		cout<<"\nA : "<<a<<"\n";
		cout<<"B : "<<b<<"\n";
	}
	arithmetic operator+(arithmetic ar)// arithmetic addition operator with "void operator+(int)"
	{                                  // arithmetic subtraction with "void operator-(int)"
		arithmetic temp;               // arithmetic multiplication operator with "void operator*(int)"
		temp.a=ar.a+a;                 // arithmetic division operator with "void operator/(int)"
		temp.b=ar.b+b;
		return temp;
	}
};
main()
{
	arithmetic a1,b1,sum;
	cout<<"Enter The Values Of Object 1\n\n";
	a1.geter();
	cout<<"\nEnter The Values Of Object 2\n\n";	
	b1.geter();
	sum=a1+b1;
	cout<<"\nThe Sum Of Two Objects Is;\n";
	sum.display();
	getch();
}