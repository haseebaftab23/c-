#include<iostream.h>
#include<conio.h>
//first review friend_w program
class Distance{
	int feet;
	float inches;
	public:
	 Distance():feet(0),inches(0.0)//zero argument constructor
	 {}
	 Distance(float fltfeet){//1 argument constructor which convert it in object
		feet=(int)(fltfeet);
		inches=12*(fltfeet-feet);
	 }
	 Distance(int f,float in){//2 argument constructor
		feet=f;
		inches=in;
	 }
	 void show(){
		cout<<feet<<":"<<inches<<endl;;
	 }
	 friend Distance operator + (Distance,Distance);//friend function that add 2 distance type objects
};
 Distance operator + (Distance d1,Distance d2){//not use of scope resolution operator shows it is not member function
 //bcoz member function define with scope resolution operator 
	int f=d1.feet+d2.feet;
	float i=d1.inches+d2.inches;
	if(i>=12){
		i-=12;
		f++;
	}
	return Distance(f,i);//nameless object returing 
}
 main(){
	Distance d1=2.5;
	Distance d2=4.5;
	Distance d3;
	d1.show();
	d2.show();
	d3=10.0+d1;//10.0 will convert in to object and then this object and d1 object as an argument pass in to friend function
	d3.show();
}