#include<iostream>
using namespace std;
class A{
	string s;
	public:
		void message(){
			 s="Abhishek";
			 cout<<"My name is "<<s;
		}
};
int main(){
	A obj;
	obj.message();
	
	return 0;
}
