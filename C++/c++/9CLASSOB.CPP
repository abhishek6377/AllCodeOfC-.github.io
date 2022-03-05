#include<iostream.h>
#include<conio.h>
class box{
public:
double length;
double breadth;
double height;

};
void main()
{
clrscr();
box box1;
box box2;
double volume=0.00;
box1.height=5.0;
box1.length=6.0;
box1.breadth=7.0;

box2.height=10.0;
box2.length=12.0;
box2.breadth=13.0;
volume=box1.height*box1.length*box1.breadth;
cout<<"Volume of box1:"<<volume<<endl;

volume=box2.height*box2.length*box2.breadth;
cout<<"Volume of box2:"<<volume<<endl;


getch();
}