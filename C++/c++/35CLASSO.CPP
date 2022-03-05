#include<iostream.h>
#include<conio.h>
int count=0;
class num{
public:          // destructor  never takes an argument not does it return any value..
num(){
count++;
cout<<"This is time when constructor is called for object number"<<count<<endl;
}
  ~num(){
  cout<<"This is  the time when my destructor is called for object number"<<count<<endl;
  count--;
  }
};		       /// Using destructor.....
void main(){
clrscr();
cout<<"We are inside our main function"<<endl;
cout<<"Creating first objecct n1"<<endl;
num n1;
{
cout<<"entering this block "<<endl;
cout<<"Creating two more objects"<<endl;
num n2,n3;
cout<<"Exiting this block "<<endl;
}
cout<<"Back to main"<<endl;


getch();
}