#include<iostream.h>
#include<conio.h>
//this program add two distance type objects without friend function
class Distance{
	int feet;
	float inches;
	public:
	 Distance():feet(0),inches(0.0)//zero argument constructor
	 {}
	 Distance(float fltfeet){//this is 1 argument that convert it from feet and inches..
		feet=(int)(fltfeet);//from fltfeet it is converted in int  
		inches=12*(fltfeet-feet);//multily with 12 convert it to inches
	 }
	 Distance(int f,float in){//2 argument constructor
		feet=f;
		inches=in;
	 }
	 void show(){
		cout<<feet<<":"<<inches<<endl;;
	 }
	 Distance operator + (Distance);//one distance object call this function ,and other object pass in to it ,
	 //after adding objects return their addition..
};
Distance Distance::operator + (Distance d2){
	int f=feet+d2.feet;
	float i=inches+d2.inches;
	if(i>=12){
		i-=12;
		f++;
	}
	return Distance(f,i);
}
main(){
	Distance d1=2.5;//1 argument constructor convert in feet and inches..
	Distance d2=4.5;//1 argument constructor convert in feet and inches..
	Distance d3;
	d1.show();
	d2.show();
	//d3=10.0+d1;    10.0 can't call a member function which has overloaded plus operator..but in case of friend function
	//10.0 and d1 will pass as an argument bcoz we know friend function doest'nt need object..
	d3=d1+10.0;//d1 call this function ,and 10.0 convert it into object.
	d3.show();
}