#include"stdio.h"
int main(){
	// this is using by 3 variable swapping 
/*	int a,b,c;
	printf("Enter first and second number \n");
	scanf("%d\n %d",&a,&b);
	c=a;// a=10, b=20
	a=b;
	b=c;
	printf("%d %d",a,b);*/
	
	int a,b,c;
	printf("Enter first and second number \n");
	scanf("%d\n %d",&a,&b);
	a=a+b;//10 ,20
	b=a-b;
	a=a-b;

	printf("%d %d",a,b);
	return 0;
	
}
