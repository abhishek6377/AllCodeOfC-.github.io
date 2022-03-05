#include<iostream.h>
#include<conio.h>
typedef struct employee{//-->struct employee{  //-->use a short cut "typedef"-->not write the struct emplo
//yee -->we use only few letter like "emp" places of struct employee
int Id;
float salary;
char code;
}emp;//-->write here short cut letter use emp structure**
void main()
{
clrscr();
/*struct employee Abhishek;
Abhishek.Id=786;
Abhishek.salary=100000004535456.45;
Abhishek.code='c';
cout<<"\nThe employee Id is "<<Abhishek.Id;
cout<<"\nThe employee salary is "<<Abhishek.salary;
cout<<"\nThe employee code is "<<Abhishek.code;*/
//USing type def**************************--->
 emp Abhishek;
Abhishek.Id=786;
Abhishek.salary=100000004535456.45;
Abhishek.code='c';
cout<<"\nThe employee Id is "<<Abhishek.Id;
cout<<"\nThe employee salary is "<<Abhishek.salary;
cout<<"\nThe employee code is "<<Abhishek.code;
getch();
}