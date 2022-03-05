#include<iostream.h>
#include<conio.h>
class baseclass{
public:
int var_base;
 virtual void display(){
cout<<"The value of base class is "<<var_base<<endl;
}
};
class derivedclass:public baseclass{
public:
int var_derived;
void display(){

cout<<"1 Dispalying base class variable var_base "<<var_base<<endl;
cout<<"2 dispalying Derived class variable var_deriv3ed "<<var_derived<<endl;
}

};
void main()
{
clrscr();
baseclass * base_class_pointer;
baseclass obj_base;
derivedclass obj_derived;

base_class_pointer = &obj_derived;
base_class_pointer->display();
getch();
}