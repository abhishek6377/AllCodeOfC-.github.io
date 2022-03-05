#include<iostream.h>
#include<conio.h>
/*
case1:
class b:public A{

order of execution of constructor --> first A() then B()
};
class 2;
class A:public B,public C{

Orderr of excutation of consstructor--> B() then C() and A()
};
case3:{
class A:public B, virtual public C{
orderr of excutation of constructor--> C() the B() and A()
// In they case virtual first call and print..
};





*/
class base1{
int data1;
public:
base1(int i){
data1=i;
cout<<"Constructor base1 is called!"<<endl;

}
void displaybase1(){
cout<<"The value of base1 is :"<<data1<<endl;
}
};
class base2{
int data2;
public:
base2(int i){
data2=i;
cout<<"Constructor base2 is called!"<<endl;

}
void displaybase2(){
cout<<"The value of base2 is :"<<data2<<endl;
}
};
class derived:public base1,public base2{
int derived1,derived2;
public:
derived(int a,int b,int c,int d):base1(a),base2(b){
derived1=c;
derived2=d;
cout<<"Derrived construtor called!"<<endl;
}
void displayderived(){
cout<<"The value of derived1 is "<<derived1<<endl;
cout<<"The value of derived2 is "<<derived2<<endl;
}
};

void main()
{
clrscr();
derived suraj(1,2,3,4);
suraj.displaybase1();
suraj.displaybase2();
suraj.displayderived();

getch();
}