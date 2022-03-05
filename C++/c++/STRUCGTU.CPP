#include<iostream.h>
#include<string.h>
#include<conio.h>
/*typedef struct employee{
int ID;
float salary;
char* code;
}ep;
void main()
{
clrscr();
ep suraj;
suraj.ID=12;
suraj.salary=123535625636;
suraj.code= "Abhishek";
cout<<suraj.ID<<endl;
cout<<suraj.salary<<endl;
cout<<suraj.code<<endl;
//**************************************************************///
//cout<<"***********************************************************";*/
//starting union structure
/*union st{
int rice;
char car;
float dollar;
};
void main()
{        clrscr();
union st m1;
m1.rice=34;
m1.car='c';     //  Union use only one ----> one things
//m1.dollar=73.45;
//cout<<m1.rice;
cout<<m1.car;
//out<<m1.dollar;
//**************************************************************///
//cout<<"***********************************************************";*/
//USing enum structure *****
void main()
{        clrscr();

enum meal{Breakfast,lunch,dinner};      //using enum...enum means give a small name to  a variable like a=lunch;
/*cout<<Breakfast;
cout<<lunch;
cout<<dinner;*/ //The two way using of enum
meal m1=lunch;
//cout<<m1
cout<<(m1==2); //this means to lunch is declare by  1 but we are equal to 2 that is ouput is "zero"
getch();
}