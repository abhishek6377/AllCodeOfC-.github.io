#include<iostream.h>
#include<conio.h>
class employee{
int id;
static int count;
public:
void setData(void){
cout<<"Enter the id "<<endl;
cin>> id;
count++;
}
void getdata(void){

cout<<"The id of is this employee is "<<id<<" is this is employee number "<<count<<endl;

}
static void getCount(void){
cout<<"the value of count is "<<count<<endl;
}

};
int employee ::count=1001;  // Its start with zero
void main()
{
clrscr();
employee abhishek,suraj ,bhawani;
abhishek.setData();
abhishek.getdata();
employee::getCount();

abhishek.setData();
abhishek.getdata();
employee::getCount();

abhishek.setData();
abhishek.getdata();
employee::getCount();

getch();

}