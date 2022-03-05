#include<iostream>
using namespace std;
//Overriding means more then function with same name and with same parameter that is called overriding 
// Suppose we make same method  extends class we only access which we make a object
class A{
	public:
		// virtual means ignore this function
		virtual void overriding(int a){
		cout<<"This function of class A "<<a<<endl;
		}
	
	
	
};
class B:public A{
	public:
		//  this is overriding 
		void overriding(int a){
		cout<<"This is function of class B "<<a<<endl;	
		}
};
int main(){
	
//	B obj;
//    obj.A::overriding(100);
//	obj.overriding(90);
   
   A *p;
   B obj;
   p=&obj;
   p->overriding(100);
   // if use child class function declared virtual function parent class 
	return 0;
}
