#include<iostream.h>
#include<conio.h>
	 class B;
	 class A
	 {
	 int a;
		friend int sum(A,B);
		public:
		A(int a1)
		{
		a=a1;
		}
	 };
	class B
	{
	int b;
	friend int sum(A,B);
	 public:
	 B(int b1)
	 {
	 b=b1;
	 }
	 };
   main()
	  {
	  A aa(1);
	  B bb(2);
	  cout<<"Sum : "<<sum(aa,bb);
	  }
  int sum(A x,B y)
  {
  return(x.a+y.b);
  }
