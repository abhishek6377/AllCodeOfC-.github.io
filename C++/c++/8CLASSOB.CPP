#include<iostream.h>
#include<conio.h>
class employee{
int Id;
int salary;
public:
void setdata(){
cout<<"Enter a employee Id :"<<endl;
cin>>Id;
cout<<"Enter a employe salary :"<<endl;
cin>>salary;
}
void getdata(){

cout<<"The employee id is "<<Id<<endl;
cout<<"The employee salary is "<<salary<<endl;
}

};
void main(){
clrscr();
employee emp[4];
for(int i=0;i<4;i++){
emp[i].setdata();
emp[i].getdata();
}

getch();
}