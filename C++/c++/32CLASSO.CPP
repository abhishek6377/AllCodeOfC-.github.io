#include<iostream.h>
#include<conio.h>
class defaulter{
int data1;
int data2;
int data3;
public:
defaulter(int x,int y,int z=9){   //this is default value of constructor;
data1=x;
data2=y;
data3=z;
}
 void number1();
};
void defaulter::number1(){
cout<<"This is data1,data2 and data3 is : "<<data1<<","<<data2<<"and"<<data3<<endl;
}
void main()
{
clrscr();
defaulter s(2,3); // you cannot give the value here and use value of default value
s.number1();
getch();
}