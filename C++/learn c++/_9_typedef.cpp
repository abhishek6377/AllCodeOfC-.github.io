//typedef: The typedef is used to give data type a new name
//this total used in structure 
#include<iostream>
using namespace std;
int main(){
//	typedef int i;// we can give name globle and local 
//	i a=90;
//		i b=90;
//			i c=90;
//			i d;
//			d=a+b+c+d;
//			
//	cout<<"The value of a is "<<d;
	
	/// pointer 
//	int *a ,b;
	// in this case it give error because *a is pointer but b is not we declare through
   //	typedef
   typedef int* integer;
   integer d,e;// by this we declare particular variable 
int	f=90;
	d=&f; 
	e=&f;
	// that way we use also pointer
	return 0;
}
