#include<iostream>
using namespace std;
 namespace A{
 	void fun(){
	 
 	int a=90;
 	cout<<a<<ends;
 }
}
namespace B{
	void fun1(){
		int b=100;
		cout<<b<<endl;
	}
}
int main(){
	A::fun();
	B::fun1(); 
	return 0;
}

