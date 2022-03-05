#include<iostream.h>
#include<conio.h>
class A{
int a;
public:
void setdata(int a){
a=a;
// use same variable to help by pointer ...
}
/*    //  use by pointerr
	A & setdata(int a)
	{                     //this is use by pointer
	this -> a=a;
	return  *this;
	} */
void getdata(){

cout<<"The value of a is "<<a<<endl;
}


};
void main(){
//This is a keyword which is points to the object which invokes the
// member function...
clrscr();
A b;
b.setdata(5);
b.getdata();
getch();
}