#include<iostream>
using namespace std;
//                          template class
//template class is generic class ,we use when user don't know what kind of value pass
//from parameters.
template<class A>
class Demo{
	public:
		Demo(A x,A y){
			cout<<x<<ends<<y<<endl;
		}
};	
int main(){
//	Demo<int> obj(12,12);
//	Demo<char> obj('A','P');
	Demo<string> obj("Abhishek","Gupta");
	return 0;
}
