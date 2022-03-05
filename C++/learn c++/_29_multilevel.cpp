#include<iostream>
using namespace std;
class A{
	protected:
		int a,b,c;
		public:
			void input(){
				cout<<"Enter number"<<endl;
				cin>>a>>b;
			}
};
class B:public A{
	public:
		void add(){
			c=a+b;
			cout<<" add = "<<c<<endl;
		}
			void sub(){
			c=a-b;
			cout<<" sub = "<<c<<endl;
		}
};
class C:public B{
	public:
			void mult(){
			c=a*b;
			cout<<" mul = "<<c<<endl;
		}
			void div(){
			c=a/b;
			cout<<" div = "<<c<<endl;
		}
};

int main(){
	C obj;
	obj.input();
	obj.add();
	obj.sub();
	obj.mult();
	obj.div();
	return 0;
}
