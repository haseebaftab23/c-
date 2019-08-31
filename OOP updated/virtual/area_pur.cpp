	  #include<iostream.h>
	  #include<conio.h>
	  # define pi 3.14//pi value constant to 3.14
	  //make a area function which will become for every its derive class to override thi function
	  class trignometry{
			public:
				virtual void area()=0;//pure virtual function area()
	  };
	  class circle:public trignometry{
			int R;
				public:
					circle(int r){
						R=r;
					}
					void area(){
							cout<<pi*R*R;
					}
	  };
	  class rectangle:public trignometry{
			int l,w;
			public:
				rectangle(int l1,int w1){
					l=l1;
					w=w1;
				}
					void area(){
						cout<<"\n"<<l*w;
					}
	  };
	  void main(){
			trignometry *pm[2];//base type array
			circle obj(1);//setting circle data member
			rectangle obj1(6,5);
			pm[0]=&obj;
			pm[1]=&obj1;
			for(int i=0;i<2;i++)
				pm[i]->area();
	  }
