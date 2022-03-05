#include<iostream.h>
#include<conio.h>
class employee{
int emp_num;
char emp_name[20];
float emp_basic;
float sal;
float emp_da;
float net_sal;
float emp_it;
public:
void get_details();
void find_net_sal();
void show_emp_details();

};
void employee :: get_details(){
cout<<"Enter employee number :"<<endl;
cin>>emp_num;
cout<<"Enter employee name :"<<endl;
cin>>emp_name;
cout<<"Enter employee basic :"<<endl;
cin>>emp_basic;
}
void employee :: find_net_sal(){
emp_da=0.52*emp_basic;
emp_it=0.30*(emp_basic+emp_da);
net_sal=(emp_basic+emp_da)-emp_it;
}
void employee :: show_emp_details(){
cout<<"Details of :"<<emp_name;
cout<<"Employee number  :"<<emp_num;
cout<<"Basic salary :"<<emp_basic;

cout<<"Employee DA :"<<emp_da;
cout<<"Income Tax :"<<emp_it;
cout<<"Net salary :"<<net_sal;
}
void main()
{
clrscr();
employee emp[10];
int i,num;
cout<<"Enter number of employee details "<<endl;
cin>>num;
for(i=0;i<num;i++)
emp[i].get_details();
for(i=0;i<num;i++)
emp[i].find_net_sal();
for(i=0;i<num;i++)
emp[i].show_emp_details();
getch();
}