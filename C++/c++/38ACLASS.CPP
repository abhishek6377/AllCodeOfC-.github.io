#include<iostream.h>
#include<conio.h>
class sum{
int data1;          // private default in inheritance
public:
int data2;
void setdata();
int getdata1();
int getdata2();    // this is  public to  private inherritance.....
};
void sum::setdata(){
data1=10;
data2=20;
}
int sum::getdata1(){
return data1;
}
int sum:: getdata2(){
return data2;
}
class add:private sum{
int data3;
public:
void process();
void display();
};
void add::process(){
setdata();
data3=data2+getdata1();
}
void add::display(){
cout<<"Value data1 is :"<<getdata1()<<endl;
cout<<"Value data2 is :"<<data2<<endl;
cout<<"Value data3 is :"<<data3<<endl;
}
void main()
{
clrscr();
add plus;
//plus.setdata();
plus.process();
plus.display();
getch();
}