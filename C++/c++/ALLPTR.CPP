#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=9;
int* b=&a;
cout<<"\n********************The Address of pointer is*************************";
cout<<"\nThe address of a :"<<&a;
cout<<"\nThe address of a :"<<b;
cout<<"\n********************The value of pointer is*************************";
cout<<"\nThe value of a :"<<a;
cout<<"\nThe value of a :"<<*b;
cout<<"\n********************The pointer to  pointer is*************************";
int** c=&b;
cout<<"\nThe value of a :"<<&c;
cout<<"\nThe value of a :"<<**c;//-->this is ** pointer to pointer****/
int***d=&c;
cout<<"\nThe value of c"<<&c;
cout<<"\nThe value of c"<<**c;
cout<<"\nThe value of c"<<**d;
cout<<"\nThe value of c"<<&d;
cout<<"\nThe value of c "<<***d;
getch();

}
