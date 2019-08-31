#include<iostream.h>
#include<conio.h>
#include<stdlib.h>//exit() function is defined in this liberary file
const int limit=10;//limit use for subscript value of aray
class safearay{
	 int arr[limit];
	 public:
	 void putel(int n,int elvalue){
		if(n<0||n>=limit){//if index is invalid then terminate this program
			cout<<"index out of bound";
			exit(1);
		} 
		else{
			arr[n]=elvalue;//put value to passed index
		}
	 }

	 int getel(int n){//get element from passed index
		if(n<0||n>=limit)//if index is invalid then terminate this program
			{
				cout<<"Index out of bound";
				exit(1);
			}
			else{
				return arr[n];//return value from passed index respectively
			}
	 }

};
 main(){
	safearay sa1;
	for(int i=0;i<limit;i++)
		sa1.putel(i,i*10);//index has looping snerio,each value is 10 times of current index value
		
      sa1.putel(4,76);//it is also possible

		for(int j=0;j<limit;j++)
			{
				int temp=sa1.getel(j);//get element through looping variable j which is working as an index
				cout<<"Element "<<j<<" is "<<temp<<endl;
			}
}
