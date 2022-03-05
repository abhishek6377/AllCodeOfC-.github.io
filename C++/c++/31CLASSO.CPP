#include<iostream.h>           // using overloading constructor
#include<conio.h>
class complex{
int a,b;
public:
complex(int x,int y){
a=x;
b=y;

}
complex(int x){
a=34;
b=0;
}
complex(){
a=0;
b=0;
}
void printnumber(){
cout<<"The value is :"<<a<<"+"<<b<<"i"<<endl;

}
};
void main(){
clrscr();
complex c1(2,4);
c1.printnumber();

complex c2(34);
c2.printnumber();

complex c3;
c3.printnumber();


getch();
}