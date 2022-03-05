#include<iostream.h>
#include<conio.h>
class student{
private:
char stname[25],stgender[10],stcode[50];
int stage;

public:
void getdata(){
cout<<"Enter the student Code ";
cin>>stcode;
cout<<"Enter the Name ";
cin>>stname;
cout<<"Enter the Gender ";
cin>>stgender;
cout<<"Enter the Age ";
cin>>stage;
}
void display(){

cout<<"\n name:"<<stname;
cout<<"\n gender:"<<stgender;
cout<<"\n age:"<<stage;
cout<<"\n student Code:"<<stcode;
}

};
void main()
{
clrscr();
student obj;
obj.getdata();
obj.display();
getch();
}