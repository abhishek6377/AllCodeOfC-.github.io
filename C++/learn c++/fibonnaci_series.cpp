#include<iostream>
using namespace std;
int main(){
int n;
int n1=0,n2=1,n3;
printf("Enter number\n");
scanf("%d",&n);
printf("You enter this value %d\n",n);
printf("%d,%d,",n1,n2);
for(int i=1;i<=n;i++){
	n3=n1+n2;
	printf("%d,",n3);
	n1=n2;
	n2=n3;
}
 
return 0;
}
