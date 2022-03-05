//#include<iostream>
//using namespace std;
////friend function is not member of class but it access private and protected member of class
////it always use with friend keyword 
//class A
//{
//        private:
//     	string show;
//     	public:
//     	void watch()
//		 {
//             show="Kapil shrama show";
//             cout<<"Person can watch "<<show<<endl;
//		 }
//		friend void dusra(A a);  // this is way to use private memeber other method 
////		A this class a is reference or we can say variable 
//};
//void  dusra(A a){
//	cout<<"I am watching "<<a.show<<" ,With help of class A by making friend function"<<endl;
//}
//int main(){
//	A obj;
//	obj.watch();
//	dusra(obj);
//	
//	return 0;
//}
//******************************************************************************************
#include<iostream>
using namespace std;
class B;
class A{
	private:
		int a;
		public:
		void borrow(){
		a=10;
		}
		friend void abhishek(A p,B q);
		
};
class B{
	private:
		int b;
		public:
		void borrow()
		{
		b=10;
		}
		friend void abhishek(A p,B q);
		
};
void  abhishek(A p,B q){
	int c=p.a+q.b;// we take in 10 for A class and 10 from b class 
	cout<<c<<endl;
}
int main(){
	A ob;
	ob.borrow();
	B ob1;
	ob1.borrow();
	abhishek(ob,ob1);
	
	return 0;
}
