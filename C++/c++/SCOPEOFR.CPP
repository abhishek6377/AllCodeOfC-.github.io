#include<iostream.h>
#include<conio.h>
int a=90;  //-->Global
void main(){
/*int a,b,c;
clrscr();///The scope resulation ...two types :Local and Global*****
cout<<"Enter a number :";
cin>>a;
cout<<"Enter a number :";
cin>>b;
c=a+b;
cout<<"The sum is :"<<c;*/
int a=5;//--> Local
clrscr();
cout<<"\nThe value of a:"<<a; //--> Local
cout<<"\nThe value of a:"<<::a;  //-->Global
getch();





}