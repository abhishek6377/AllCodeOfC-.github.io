#include<iostream.h>
#include<string.h>
#include<conio.h>
class student{
char subject[20];
float marks;
public:
void setdata(){
cout<<"Enter a subject"<<endl;
cin>>subject;
cout<<"Enter a marks " <<endl;
cin>>marks;

}
void getdata(){
cout<<"subject is "<<subject<<endl;
cout<<"marks is "<<marks<<endl;
}

};
void main()
{
clrscr();
student s;
s.setdata();
s.getdata();

getch();
}