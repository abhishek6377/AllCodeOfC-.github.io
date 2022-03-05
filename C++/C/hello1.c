#include<stdio.h>
struct student {
	int age;
	char name[23];
	int id;
	// this is simmple structure
};
int main(){
	struct student s1;  //={12,"Abhishek",999
	//};
	s1.age=23;
	s1.name=strcpy("Abhishek");
	s1.id=0890;
    printf("Students data \n");
    printf("**********************************\n");
	printf(" %d\n",s1.age);
	printf(" %s\n",s1.name);
	printf(" %d\n",s1.id);
	
	return 0;
}
