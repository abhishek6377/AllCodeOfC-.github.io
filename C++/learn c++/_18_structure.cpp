//Structure is user-defined data types which store the dis-similar values 
// IN structure the total sum of data types is structure value 
//Structure are used always struct keyword
// union is same as structure but we use keyword of union of struct  but size of union is 
//biggest data types size of is size of union 
#include<iostream>
using namespace std;
 struct Students{
 int rollno;
 char name[20];
 float per;	
 };
 union Students1{
 int rollno;
 char name[20];
 float per;	
 };
 int main(){
  struct	Students std;
 union Students1 std1;
// 	cout<<"Enter your roll no ,name and percentage "<<endl;
// 	cin>>std.rollno>>std.name>>std.per;
// 	cout<<"Your name is "<<std.name<<endl;
// 	cout<<"Your rollno is "<<std.rollno<<endl;
// 	cout<<"Your percentage is "<<std.per<<endl;
 	cout<<"The size of structure is "<<sizeof(std)<<endl;
 	cout<<"The size of union is "<<sizeof(std1);
 	return 0;
 }
