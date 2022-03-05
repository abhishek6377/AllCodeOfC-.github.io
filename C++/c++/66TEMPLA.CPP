#include<iostream.h>
#include<conio.h>
template <class t1=int,class t2=float,class t3=char>
class suraj{
public:
t1 a;
t2 b;
t3 c;
suraj(t1 x,t2 y,t3 z){
a=x;
b=y;
c=z;
}
void display(){
cout<<"The value of a: "<<a<<endl;
cout<<"The value of b :"<<b<<endl;
cout<<"The value of c : "<<c<<endl;
}


};
void main()
{
clrscr();                     // this is error
suraj<> s(4,5.6,'a');
s.display();
cout<<endl;
suraj<float,char,char> a(1.6,'l','j');
a.display();
getch();
}
