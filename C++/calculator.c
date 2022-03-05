#include<stdio.h>
extern void sum();
extern void sub();
extern void multi();
extern void div();
int main(){
	int opt;
	printf("*****Calcultor***\n");
	printf("Press this keys like***1,2,3,4,5\n");
	    printf("1.Addition\n");
		printf("2.subtraction\n");	
		printf("3.Multiple\n");	
		printf("4.Division\n");
			printf("5.exit\n");
			printf("Enter any key .......\n");
			scanf("%d",&opt);
			switch(opt)
			{
				case 1:
					sum();
					break;
					case 2:
					 sub();
					break;
					case 3:
					multi();
					break;
					case 4:
					 div();
					break;
					default:
						printf("Calcultor Exit....");
						printf("bye bye ");
			}
	
	return 0;
}
#include"sum.c"
#include"sub.c"
#include"multi.c"
#include"div.c"
