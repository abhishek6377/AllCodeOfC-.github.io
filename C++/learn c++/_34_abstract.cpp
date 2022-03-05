#include<iostream>
using namespace std;
//Abstract class means that you define to inherit by other classess .the purpose of abstract class 
//is to provide  a structure to the other class which you can inherit
// we cannot create object of abstract 
// A class contain contain atleast one pur virtual function that is called abstract class 
/// Normally we say that class where one class is incoplete and another class is complete 
//and which class is incomplete we are override the class that's ' 
class Animal{
	public:
	virtual void sound()=0;	
	void eat()
	{
		cout<<"Noramally Animal are eats grass"<<endl;
	}
};
class Dog:public Animal
{
	public:
		void sound(){
			cout<<"BHoo BHoo..";
		}
};
int main()
{
	Dog obj;
	obj.eat();
	obj.sound();
    	
	return 0;
}
