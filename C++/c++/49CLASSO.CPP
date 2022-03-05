#include<iostream.h>
#include<conio.h>
class test{
int a,b;
public:
test(int i,int j):a(i),b(i+j){//b(j)    //    initialize the value of constructor...
cout<<"Constructor is called!"<<endl;
cout<<"The value of "<<a<<endl;
cout<<"The value of "<<b<<endl;
}

};
void main()
{
clrscr();
test suraj(1,4);
//suraj.test;

getch();
}