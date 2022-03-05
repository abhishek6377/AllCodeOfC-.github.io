#include<iostream>
using namespace std;
//using namespacce std;
//polymorphism means it made with two greek  word poly means many and morphism forms that is calle
//poly..
//It means same object different behaviour that is called 
//two types of polymorphism
//1.complile time -->static binding -->ex operator overloading 
//2.runtime -->dynamic binding -->ex overriding overloading 
//Overloading-->It means more fuction with same name in single class that is called overloading
class A{
//	int a,b;
	public:
		void overloading(int a,int b){
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
		cout<<" Sum = "<<b+a<<endl;	
		}
			void overloading(int a,int b,int c){
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
		cout<<"c = "<<c<<endl;
		cout<<" Sum = "<<b+a+c<<endl;	
		}
			void overloading(float a,float b){
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
		cout<<" Sum = "<<b+a<<endl;	
		}
		void overloading(float a,float b,float c){
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
		cout<<"c = "<<c<<endl;
		cout<<" Sum = "<<b+a+c<<endl;	
		}
	
};
int main(){
	A obj;
	obj.overloading(233,23,90);
	
	return 0;
}
