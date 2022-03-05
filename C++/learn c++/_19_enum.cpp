//enum stands enumeration is user defined name that consist of integral constants
#include<iostream>
using namespace std;
int main(){
	// normally wee say that enum provide integer number with start with zero 
	enum week{
		monday, tuesday ,wednesday, thursday,friday,saturday,sunday
	};
	cout<<monday<<ends;
	cout<<tuesday<<endl;
	// we all use this type of enum 
	week str=monday;
//	week str="Abhishek";//errro
//week str=90;// error 
	
//	if we store string and any integer in str it give error  ,it take only enum data where declared
	cout<<str;
	return 0;
}
