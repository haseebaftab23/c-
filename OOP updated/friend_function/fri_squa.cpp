#include<iostream.h>
#include<conio.h>
//first study friend_s program
class Distance{
	int feet;
	float inches;
	public:
	Distance():feet(0),inches(0.0)
   {}
	Distance(int f,float in):feet(f),inches(in)
	{}
	void show(){
		cout<<feet<<":"<<inches;
	}
  friend float square(Distance);//friend function having distance type object
};
float square(Distance d){//defination of square function ,not use of binary scope resolution that show it is not member function
	float fltfeet=d.feet+d.inches/12;
	float feetsquare=fltfeet*fltfeet;
	return feetsquare;
}
void main(){
	Distance dist(3,5.0);
	float squar;
	squar=square(dist);//calling of square funnction without reference of object rather than object will be pass in this fuction as an argument
	cout<<"\ndistance=";dist.show();
	cout<<"\nsquare="<<squar;
}