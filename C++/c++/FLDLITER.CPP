#include<iostream.h>
#include<conio.h>        //float and double ,long literal...
void main(){
int a=12;
float d=45.23;//---> its take by default "DOUBLE";
float b=23.23f;//-->
long double  c=23.23l;
clrscr();
cout<<a;
cout<<"\n The number of b is "<<b<<"\n The number of c is "<<c; //-->This is
//chain of c++;
cout<<"\n*******************************************";
cout<<"\nthe number of :"<<b<<endl;

cout<<"the number of :"<<c<<endl;
cout<<"the number of :"<<d<<endl;
getch();
}