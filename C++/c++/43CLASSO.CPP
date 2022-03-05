#include<iostream.h>
#include<conio.h>
class base1{
public:
void greet(){
cout<<"How are you ?"<<endl;
}
};
class base2{
public:
void greet(){
cout<<"Kaise ho " <<endl;
}
};
class derived:public base1,public base2{
public:
void greet(){             // this is ambiguity inherutance .....
base2 :: greet();
}
};
void main(){
clrscr();
base1 base1obj;
base2 base2obj;
base1obj.greet();
base2obj.greet();
derived d;
d.base2();
getch();
}