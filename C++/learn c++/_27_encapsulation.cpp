#include<iostream>
using namespace std;
//Encapusulation mean wraping data member and member function 
//into a single unit that is called encapuslation
class A{
	private:
	 string name;
	 string address;
	 long mob;
	 public:
	 	void input(){
	 		name="Abhishek gupta";
	 		address="88-b usha vihar treveni nagar";
	 		mob=6377025641;
	 		
		 }
		 void output(){
		 	cout<<"My name is "<<name<<endl;
		 	cout<<"My address is "<<address<<endl;
		 	cout<<"My mobile is "<<mob<<endl;
		 }
};

int main(){
	A ob;
	ob.input();
	ob.output();
	return 0;
}
