#include<iostream.h>           // this is friend function:
#include<conio.h>
class Y;
class X{
int data;
public:
void setValue(int value){
data=value;
}
friend void add(X,Y);
};
class Y{
int num;
public:
void setValue(int value){
num=value;
}
friend void add(X,Y);
};
void add(X q1,Y q2){
cout<<"Sming data of X and Y objects gives me "<<q1.data + q2.num<<":";
}
void main(){
clrscr();
X q1;
q1.setValue(5);

Y q2;
q2.setValue(5);
add(q1,q2);



getch();
}