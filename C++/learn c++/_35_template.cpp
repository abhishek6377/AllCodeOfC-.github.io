// independent of data types is know as template 
//Template is the frame ,It means accept any type of value at the time of progrm 
//excution
//two types of template in c++
//1.function template:  is generic function,normal function works only one type of value that is normal function 
//but function template work on different  type of value at time that is called function template 
//                   function template
#include<iostream>
using namespace std;
template<class A>
void fun(A x,A y){// by this function we use any type of data types 
	cout<<x<<ends<<y<<endl;
}
int main(){
	fun(122,34);
	fun("Abhishek","Gupta");
	fun(90.90,89.90);
	return 0;
}
