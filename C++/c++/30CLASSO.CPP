#include<iostream.h>
#include<conio.h>
class complex{
int a;
int b;
public:
complex(void);
void printnumber(){
cout<<"The value is :"<<a<<"+"<<b<<"i"<<endl;

}
};
complex ::complex(void){
a=3;
b=9;

}
void main(){
clrscr();
complex c1,c2;
c1.printnumber();
//c2.printnumber();



getch();
}