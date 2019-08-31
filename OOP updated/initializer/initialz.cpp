#include<iostream.h>
//This program shows behavior of initializer list
class cClass{
	int a;
	float b;
	char c;
	public:
		cClass(int a1,float b1,char c1):a(a1),b(b1),c(c1)//it receive 3 vlaues,first assign to a1 and so on..
		{
			//it is equavalent to a=a1;b=b1;c=c1..
		}
		void show()const{//const is read only function which means a ,b,c will only ddisplay.
		//a++;a can not be change becoz it is const function.....
			cout<<"a="<<a<<"\nb="<<b<<"\nc="<<c;
		}
};
 main(){
	cClass obj(2,3.4,'g');
   obj.show();
}
