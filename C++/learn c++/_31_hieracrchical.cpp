#include<iostream>
using namespace std;
class Animal{
	public:
		void eat(){
			cout<<"Animals are eat food"<<endl;
		}
};
class Dog:public Animal{
	public:
		void voice(){
			cout<<"Bhoo bhoo"<<endl;
		}
	
};
class Cat:public Animal{
	public:
		void cvoice(){
			cout<<"meow meow.."<<endl;
		}
	
};
int main(){
	Dog d;
	d.eat();
	d.voice(); 
	
	Cat c;
	c.eat();
	c.cvoice();
	return 0;
}
