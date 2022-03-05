#include<iostream.h>
#include<conio.h>
#include<string.h>
class test{
int rollno;
int id;
char* name;
public:
void roll(){
cin>>rollno;
cin>>id;
cin>>name;
}                                   // This is class
void display(){
cout<<"The Roll no is :"<<rollno<<endl;
cout<<"The Id  is :"<<id<<endl;
cout<<"The Name is :"<<name<<endl;


}

};
void main()
{
clrscr();        /// this is object
test t;
t.roll();
t.display();

getch();
//getch();
}