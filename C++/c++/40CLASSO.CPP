#include<iostream.h>
#include<conio.h>
class student{
protected:
int roll_number;
public:
void set_roll_number(int);
void get_roll_number(void);
};
void student :: set_roll_number(int r){
roll_number=r;
}
void student :: get_roll_number(){
cout<<"The roll nmber is "<<roll_number<<endl;
}
class exam:public student{
protected:
float maths;
float physics;
public:
void set_marks(float,float);
void get_marks(void);
};
void exam::set_marks(float m1,float m2){
maths=m1;
physics=m2;
}
void exam::get_marks(){
cout<<"The marks obtained in maths are"<<maths<<endl;
cout<<"The marks obtained  in physics are:"<<physics<<endl;
}
class result:public exam
{
float percentage;
public:
void display_results(){
get_roll_number();
get_marks();
cout<<"your percentage is "<<(maths+physics)/2<<"%"<<endl;
}
};
void main()
{
/*
notes:-
if we are inheriting B from A and C from B:[A-->B---.c]
1.A is the basic class for B and B is the base class For C
2.A--->b-->C is called Inheritance Path
*/
clrscr();
result harry;
harry.set_roll_number(420);
harry.set_marks(97.0,99.0);
harry.display_results();
getch();
}