#include<iostream.h>
#include<conio.h>
class number{
int a;
public:
number(){
a=12;
}
number(int num){
a=num;
}
void display(){
cout<<"The copy  constructor value is :"<<a<<endl;
}
};
void main(){
clrscr();
number x,y,z(45);
x.display();
y.display();
z.display();
getch();

}