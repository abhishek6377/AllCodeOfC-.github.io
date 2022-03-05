#include<iostream.h>
#include<conio.h>
int multiply(int a,int b){
int c;
c=a*b;
return c;
}
void main()
{
clrscr();
int a,b;
cout<<"enter a number:";
cin>>a;
cout<<"Enter a Second number";
cin>>b;
cout<<"The two number multiply;"<<multiply(a,b);
getch();
}