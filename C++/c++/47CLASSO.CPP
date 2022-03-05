#include<iostream.h>
#include<conio.h>
#include<math.h>
class simplecal{
int a,b;                     // This is simple calculator
public:
void set_operation(){
cout<<"Enter a number "<<endl;
cin>>a;
cout<<"Enter a second number"<<endl;
cin>>b;
}
void set_display(){
cout<<"The sum of "<<a+b<<endl;
cout<<"The multiple of "<<a*b<<endl;
cout<<"The divide of"<<a/b<<endl;
cout<<"The subsration "<<a-b<<endl;
}

};
class scintificCalculator{
int a,b;
public:
void get_operation(){
cout<<"Enter a number"<<endl;
cin>>a;
cout<<"Enter a second number "<<endl;
cin>>b;
}
void get_display(){
cout<<"The  value of sin(a) is "<<sin(a)<<endl;
cout<<"The value of sin(b) is "<<sin(b)<<endl;
cout<<"The  value of cos(a) is "<<cos(a)<<endl;
cout<<"The value of cos(b) is "<<cos(b)<<endl;
cout<<"The  value of tan(a) is "<<tan(a)<<endl;
cout<<"The value of tan(b) is "<<tan(b)<<endl;
cout<<"The  value of exp(a) is "<<exp(a)<<endl;
}


};
void main(){
clrscr();
//simplecal cal;
//cal.set_operation();
//cal.set_display();
scintificCalculator cal;
cal.get_operation();
cal.get_display();
getch();
}