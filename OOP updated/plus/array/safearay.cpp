#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//this program has ability of overloaded subscript operator []. 
const int limit=10;
class safearay3{
	int arr[100];
	public:
		int& operator[](int n){//1.this overloaded operator will return reference of array and in main() we will set 
		//values to this array..
			if(n<0 || n>=limit){
				cout<<"Index out of bound";
				exit(1);
				}
				return arr[n];
		}
      	int operator[](int n) const{//2.this overloaded operator will return values of array and in main() we will 
      	//save them in temp variable...
			if(n<0 || n>=limit){
				cout<<"Index out of bound";
				exit(1);
				}
				return arr[n];
		}
};
void main(){
	safearay3 sa1;
	for(int i=0;i<limit;i++)
		sa1[i]=i*10; //arr[i]=value,..through 1st overloaded function.
      sa1[15]=56;
		for(int j=0;j<limit;j++){
			int temp=sa1[j];//temp=arr[j] through 2nd overloaded function.
			cout<<"Element "<<j<<" is "<<temp<<endl;
         }
}