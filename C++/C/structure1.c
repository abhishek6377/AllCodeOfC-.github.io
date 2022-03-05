#include<stdio.h>
struct date{
	int dd;
	int mm;
	int yy;
};
// using nested structure
struct student{
	int id;
	char name[12];
	int age;
	struct date dob;
};
int main(){
	struct  student s1={
		23,"babaram",908,{24,1,2000}
	};
	printf("students infor..\n");
	printf("%d%s%d %d-%d-$d,s1.id",s1.name,s1.age,s1.age.dd,s1.age.mm,s1.dob.yy);
}
