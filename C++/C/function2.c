#include<stdio.h>
void add(); // decalertion or protype
// no argument or no return value
int main(){
	add(); // called
	return 0;
	
} 
void add(){ // decartion or body
	int a=10;
	int b=20;
	int c=a+b;
	printf("Sum= %d",c);
}

