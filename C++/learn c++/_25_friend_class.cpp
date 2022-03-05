#include<iostream>
using namespace std;
class A{
	string s;
	int a,b;
	public:
		void message(int x,int y){
			a=x;
			b=y;
			 s="Abhishek";
			 cout<<"My name is "<<s<<endl;
		}
		friend class B;
};
class B{
	int c;
	public:
		void add(A r){
			c=r.a+r.b;
			cout<<"Sum of two Integer "<<c<<endl;
		}
};
int main(){
	A obj;
	obj.message(2,30);
	B ob;
	ob.add(obj);
	
	return 0;
}
