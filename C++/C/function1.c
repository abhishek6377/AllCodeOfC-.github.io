//function is set of statement and block of statement.
//two types of function
//1.pre defined //	printf-->  this is predefined function
//2.user defined // programmer made by function is called user defined
//************************Three types of function components****************
//1.Decalartion or protype 
//2.invoked or called
//3.definitionn or body
#include<stdio.h>
void message();// this is declartion or protope
int main(){
	printf("This is function\n"); 
	
	
message();   // invoked or calling // how many time you called this how many time excutes 
message();
return 0;
}
void message(){// this is definition or body//
	printf("Hello Everyone this is simple function\n");
}
