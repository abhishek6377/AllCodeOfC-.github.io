#include<iostream.h>
#include<conio.h>
class complex{
int a;
int b;
public:
void  setdata(int v1,int v2){
a=v1;
b=v2;
}
void getdata(complex o1,complex o2){
a=o1.a+o2.a;
b=o1.b+o2.b;
}
void complexsum(){
cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;

}
};
void main()
{
clrscr();
complex c1,c2,c3;
c1.setdata(2,5);
c1.complexsum();

c2.setdata(4,5);
c2.complexsum();

c3.getdata(c1,c2);
c3.complexsum();
getch();
}