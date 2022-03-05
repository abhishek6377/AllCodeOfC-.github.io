#include<iostream.h>
#include<conio.h>
class ptr
{
int real,imaginery;
public:
 void getptr(int r,int i){
real=r;
imaginery=i;
}
 void setptr(){
cout<<"The value of real is "<<real<<endl;
cout<<"The value of imaginery is "<<imaginery<<endl;
}
};
void main()
{
clrscr();
/* ptr abhi;
abhi.getptr(2,6);       // this is a simple object
abhi.setptr();  */
ptr abhi;
ptr *ptr =&abhi;
(*ptr).getptr(2,6);       // this is a pointer  object
(*ptr).setptr();


getch();
}