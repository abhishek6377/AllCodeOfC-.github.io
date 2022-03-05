#include<iostream>
//destructor deallocate the memory it alaways use with ~tild symbol that is called destructor 
// And it same as class name 
using namespace std;
	int count=0;
class A{
	public:
	
     A(){
     
     	cout<<"const increaser "<<++count<<endl;
	 }
	 ~A(){
//	 	cout<<"I am destructor"<<endl;
	 	cout<<"Decrease"<<count--<<endl;
	 }
	
	
};
int main(){
      A ob,ob1,ob2;
	return 0;
}
