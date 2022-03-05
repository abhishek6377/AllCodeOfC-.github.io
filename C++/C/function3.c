#include<stdio.h>
int add(); // decalertion or protype
// no argument or  return value
int main(){
	int z=add(); // called
		printf("Sum= %d",z);
	return 0;
	
} 
  int add(){ // decartion or body
	int a=10;
	int b=20;
	int c=a+b;
	return c;

}

