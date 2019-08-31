#include<iostream.h>
#include<conio.h>
//square of a Distance object through member function
class Distance{
	int feet;
	float inches;
	public:
	Distance():feet(0),inches(0.0)//zero argument constructor
    {}
	Distance(int f,float in):feet(f),inches(in)//two argument constructor
	{}
	void show(){
		cout<<feet<<":"<<inches;
	}
	float square();//it is member function
};
float Distance::square(){//defination outside the class 
	float fltfeet=feet+inches/12;//convert in a single value
	float feetsquare=fltfeet*fltfeet;//square of that value
	return feetsquare;
}
 main(){
	Distance dist(3,5.0);
	float squar;
	squar=dist.square();
	cout<<"\ndistance=";dist.show();
   cout<<"\nsquare="<<squar;
}