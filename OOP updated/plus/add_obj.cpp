	#include<iostream.h>
	#include<conio.h>
	class Distance{
		int feet;
		float inches;
		public:
		//constructor overloading 1 zero argument constructor and 2nd is 2 
		//argument constructor
			Distance():feet(0),inches(0.0){
			}
			Distance(int f,float in):feet(f),inches(in){
			}
			void showDist()const{
				cout<<feet<<":"<<inches<<endl;
			}
			Distance operator + (Distance)const;//here distance obj is retured ,
			//1 object will call this function and other object is passed to this function
			//then after addition 3rd object will carry its addition,const means this function 
			//is only for read..no modification in objects. 
	};
	Distance Distance::operator + (Distance d2)const{
		int f=feet+d2.feet;//simple feet of called object and d2.feet are feet of 
		//passing object.
		float in=inches+d2.inches;
		if(in>=12){
			in-=12;
			f++;
		}
		//nameless object having 2 parameters set by constructor 
		 return Distance(f,in);
	}
	void main(){
		Distance dist1(2,3),dist2(4,5),dist3;
		//dist1.feet=2,,,dist1.inches=3
		//dist2.feet=4,,,dist2.inches=5
		//dist3.feet=0,,,dist3.inches=0
		dist3=dist1+dist2;//dist1 will call overloaded + operator and dist2 will
		//pass to that function ,after addition object is return and dist3 will 
		//catch addition result.
		dist3.showDist();//show function is called.
	}