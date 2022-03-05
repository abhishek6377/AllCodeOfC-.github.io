#include<iostream.h>
#include<conio.h>
void main(){
int marks[]={12,45,102,89,12};
int* p=marks;
clrscr();
cout<<*(p++)<<endl;
cout<<*p<<endl;          //uSING array and pointer**********
cout<<*(++p)<<endl;
cout<<*(++p)<<endl;
cout<<*(++p)<<endl;
//cout<<*(++p)<<endl;
getch();


}