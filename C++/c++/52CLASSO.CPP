#include<iostream.h>
#include<conio.h>
class shopitem{
int id;
float price;
public:
void setdata(int a,float b){
id=a;
price=b;
}
void getdata(){
cout<<"The id is:- "<<id<<endl;
cout<<"The price is  "<<price<<endl;
}
};
/*1 2 3
    ^
    |
    |
    ptr
     temp
     */
void main()
{
clrscr();
int size=3;
// int *ptr=&size;
//  int *ptr=new int[34];

// 1. general store
// 2.veggies item
// 3.hardware item

shopitem *ptr=new shopitem [size];
shopitem *ptrtemp =ptr;
int p,i;
float q;
for(i=0;i<size;i++)
{
cout<<"Enter  Id and price of item "<<i+1<<endl;
cin>>p>>q;
//(*ptr).setdata(p,q);     // Use any pointer both are same
ptr->setdata(p,q);
ptr++;
}
for(i=0;i<size;i++){

cout<<"item number:-"<<i+1<<endl;
ptr->getdata();
ptrtemp++;
}

getch();
}