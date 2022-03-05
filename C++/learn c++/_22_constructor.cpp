#include<iostream>
// Constructor is same name as class when we create object it 
//is automatically called that is called constructor
//why we make a constructor
//the main purpose of constructor initilize the object
//types of constructor 
//1.default 
//2.parameter constructor // where we pass value 
//3.copy constructor// where we copy data one constructor ot another constructor that
using namespace std;
class A{
	private:
		int x, y;
	public:
	A(){// this default contructor 
		cout<<"Hello,I am constructor"<<endl;
	}
	A(int a,int b){// this parameter constructor 
	x=a;
	y=b;
	
		cout<<"The value of a and b is "<<a<<","<<b<<endl;
	}
	A(A &ref){// this is copy constructor 
		x=ref.x;
		y=ref.y;
		cout<<x<<ends<<y<<endl;
	}
};
int main(){
	A ob(23,90);
	A ob1=ob;
//	A ob=A();// that way we also use the constructor 
	return 0;
}
