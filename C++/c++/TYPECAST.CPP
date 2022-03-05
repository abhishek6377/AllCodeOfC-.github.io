#include<iostream.h>
#include<conio.h>
void main()
{
int a=90;
float b=90.23;
clrscr();
cout<<"\nThe value of a :"<<a;
cout<<"\nThe value of b :"<<b;
cout<<"\nThe value of a :"<<int(a);
cout<<"\nThe value of a :"<<(int)a;
cout<<"\nThe value of b :"<<float(b);
cout<<"\nThe value of b :"<<(float)b;
int c=a+int(b);
cout<<"\nthe sum of :"<<a+b<<endl;
cout<<"\nthe sum of :"<<a+int(b)<<endl;
cout<<"\nthe sum of :"<<a+(int)b<<endl;
getch();


}