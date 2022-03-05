#include<iostream.h>
#include<conio.h>
class point{
int a,b;
public:
point(int x,int y){
a=x;
b=y;
}
void pointn(){
cout<<"The point is ("<<a<<","<<b<<")"<<endl;
}
};
void main(){
clrscr();
point n(4,5);
n.pointn();
point l(2,6);
l.pointn();
getch();
}