	#include<iostream.h>
	#include<conio.h>
	class Distance{
		int feet;
		float inches;
		public:
			Distance():feet(0),inches(0.0){
			}
			Distance(int f,float in):feet(f),inches(in){
			}
			void showDist()const{
				cout<<feet<<":"<<inches<<endl;
			}
			void operator + (Distance);
	};
	void Distance::operator + (Distance d2){
	feet=feet+d2.feet;
		inches=inches+d2.inches;
	}
	void main(){
		Distance dist1(2,3),dist2(4,5),dist3,dist4(1,1);
		dist1+dist2;
			dist1.showDist();
	  //	Distance dist5=dist1+dist2+dist4;
      //dist1 k reference sy call ho ri ha,isi liye wo show b kar ra ha.
		//dist5.showDist();
	}