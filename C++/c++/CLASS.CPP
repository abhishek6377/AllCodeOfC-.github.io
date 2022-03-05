#include<iostream.h>
#include<conio.h>
class marks{
int english,hindi,total;
float per;
public:
void setmarks(){
cout<<"Enter a number of English:"<<endl;
cin>>hindi;
cout<<"Enter a number of Hindi:"<<endl;
cin>>english;
}
void gettotal(){
//int total;
total=hindi+english;
cout<<"The Total is :"<<total<<endl;
}
void getper(){
//float per;
per=total*100/200;
cout<<"The Percentage is :"<<per<<"%"<<endl;
}

};
void main(){
clrscr();
marks a;
a.setmarks();
a.gettotal();
a.getper();

getch();
}