#include<iostream>
using namespace std;
int a,b,c;
class A{
	public:
		void input(){
			cout<<"Enter number"<<endl;
			cin>>a>>b;
		}
};
class B{
	public:
		void add();
		void sub();
	
};
void B::add(){
	c=a+b;
	cout<<" sum = "<<c<<endl;
}
void B::sub(){
	c=a-b;
	cout<<" sub = "<<c<<endl;
}

class C{
	public:
		void mult();
		void div();
};
void C::div(){
		c=a/b;
	cout<<" div = "<<c<<endl;
}
void C::mult(){
		c=a*b;
	cout<<" multi = "<<c<<endl;
}
class D:public A,public B,public C{
	public:
		void greater(){
		
	c=a>b;
	cout<<"A is greater then B "<<c<<endl;
}
};


int main(){
	D obj;
	obj.input();
	obj.add();
	obj.sub();
	obj.mult();
	obj.div();
	obj.greater();
	
	
}
