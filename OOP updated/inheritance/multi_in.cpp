#include<iostream.h>
#include<conio.h>
//This program display constructor and destructor order in case of multiple inheritance
class base1{
	public:
		base1(){//constructor of base
				cout<<"Constructor of base1 class\n";
			}
			~base1(){//destructor of base
				cout<<"Destructor of base1 class\n";
			}
};
class base2{
public:
			base2(){//constructor of base2
				cout<<"Constructor of base2 class\n";
			}
			~base2(){//destructor of base2
				cout<<"Destructor of base2 class\n";
			}
};
class derive:public base1,public base2{
	public:
				derive(){//constructor of derive
				cout<<"Constructor of derive class\n";
			}
			~derive(){//destructor of derive
				cout<<"Destructor of derive class\n";
			}
};
main(){
	derive obj;
}