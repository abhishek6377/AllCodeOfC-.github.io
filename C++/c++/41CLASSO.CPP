#include<iostream.h>
#include<conio.h>          // this is multiplelevel inheritance
class base1{
protected:
int base1;
public:
void set_base1(int a){
base1=a;
}
};
class base2{
protected:
int base2;
public:
void set_base2(int a){
base2=a;
}///we are take number  of class in multiple inheritance

};
class base3{
protected:
int base3;
public:
void set_base3(int a){
base3=a;
}

};
class derived:public base1,public base2,public base3{
public:
void show(){
cout<<"The value of base1 is :"<<base1<<endl;
cout<<"The value of base2 is :"<<base2<<endl;
cout<<"The value of base3 is :"<<base3<<endl;
cout<<"The sum of bases is :"<<base1 +base2+base3<<endl;

}
};
void main()
{
clrscr();
derived suraj;
suraj.set_base1(12);
suraj.set_base2(56);
suraj.set_base3(45);
suraj.show();
getch();
}