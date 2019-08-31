#include<iostream.h>
#include<conio.h>
#include<stdlib.h>//exit() function defined in it.
const int limit=10;
class safearay2{
	int arr[limit];
	public:
	//1.in short this function purpose is to set values to array
		int& access(int n){//this function is return address of arr[index] as so on...and we will pass values to them 
			if(n<0 ||n>=limit){
				cout<<"index out of bound";
				exit(1);
			}
			return arr[n];
		}
	//2.this function is used to get values from array
			int access1(int n) const{
			if(n<0 ||n>=limit){
				cout<<"index out of bound";
				exit(1);
			}
			return arr[n];
		}
};
void main(){
	safearay2 sa1;
	for(int j=0;j<limit;j++)
	{
		sa1.access(j)=j*10;//means arr[0]=j*10 and so on..;
	}
	for(int i=0;i<limit;i++){
		int temp=sa1.access1(i); //here this function get values from array, temp=arr[0] and so on..
		cout<<"Element "<<i<<" is "<<temp<<endl;
	}

}