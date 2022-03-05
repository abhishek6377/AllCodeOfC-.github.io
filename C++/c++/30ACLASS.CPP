#include<iostream.h>
#include<conio.h>
class complex{    // This is a parmeterized constructor thier have 2 parameter
int a;
int b;
public:
complex(int ,int);
void printnumber(){
cout<<"Your number:"<<a<<"+"<<b<<"i"<<endl;

}

};
complex :: complex(int x,int y){
a=x;
b=y;
}
void main()
{
clrscr();
complex a(2,3);
complex b=complex(4,56);
a.printnumber();
b.printnumber();
getch();
}