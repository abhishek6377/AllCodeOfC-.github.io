//Access specfier 
//three types of c++
//1.private it by default 
//2.protected only access by child class 
//3.public access by anywhere
#include<iostream>
using namespace std;	 
class A{
	private:// this access in only own class
	int a;
	public:
	int b=90;
	protected:// this class access sub class who extends parents class
	int c;
	public:
		void message(){
			cout<<"Hello ,I am using class and object"<<endl;
		}
};
int main(){
	A obj;

//	cout<<obj.a;
	cout<<obj.b;
//	cout<<obj.c;
	obj.message();
	return 0;
}
