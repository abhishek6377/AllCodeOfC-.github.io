#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=90;
int* ptr=&a;
float b=56.23;
float* ptr1=&b;
cout<<"The value of a is "<<a<<endl;
cout<<"The value of a is "<<b<<endl;
// new a keyword
int *p= new int(90);
cout<<"The value of is "<<p<<endl;
// using array in pointer in c++
int *arr=new int[100];
arr[0]=10;
*(arr+1);//arr[1]=20;
arr[2]=30;
delete arr;
cout<<"The arr of "<<arr[0]<<endl;
cout<<"The arr of "<<arr[1]<<endl;
cout<<"The arr of "<<arr[2]<<endl;
getch();
}