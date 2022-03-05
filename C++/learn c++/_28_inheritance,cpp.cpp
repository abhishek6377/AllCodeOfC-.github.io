#include<iostream>
//Inheritance means one class access the property of another class that is called inheritance 
//types of inheritance 
//1.simple // only one base class and only one derived class
//2.MUltilevel // only one parent class and more then child class that is called multilevel
//3.multiple// more then parent class and only one derived class
//4.hierarachical// one parent and more then child class but all are extend directly that is called 
//5.hybrid   // it is combination of inheritance that is called hybrid 
using namespace std;
class A{
	protected:
		int a,b;
		public:
			void add(){
			cout<<"Enter number"<<endl;
			cin>>a>>b;
				
			}
			void display(){
				int c=a+b;
				cout<<"sum "<<c<<endl;
			}
	
};
class B :public  A{
	public:
		void sub(){
			int ci=a-b;
			cout<<"Substract "<<ci<<endl;
		}
	
	
};
int main(){
	int main();
	B ob;
	ob.add();
	ob.display();
	ob.sub();
	return 0;
}
