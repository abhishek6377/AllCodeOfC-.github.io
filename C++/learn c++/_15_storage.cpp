//Storage class means define the scope and lifetime of variable that is called storage class.
//four types of storage class 
//1.auto (local variable by default variable is auto)
//2.static 
//3.extern(global)
//4.register
#include<iostream>
int a=90;// this global variable
void fun();
int main(){
	fun();
	fun();
	fun();		
	fun();
	return 0;
}
void fun(){
	int a=10;
	static int b=10;
	   // in this case a value not increment because it is local variable it life is till in block 
//	 //but static variable value are increase because it life is till the program
	printf("a=%d  ",a);
	printf("b=%d\n",b);
	++a,++b;
}
