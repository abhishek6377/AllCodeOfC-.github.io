#include<iostream.h>
#include<conio.h>
class student{
protected:
int roll_number;
public:
void set_roll_number(int r){
roll_number=r;
}
void print_roll(){

cout<<"The roll number is :"<<roll_number<<endl;
}
};
class test: virtual public student{
protected:
float maths;
float physics;
public:
void set_marks(float m1,float m2){
maths=m1;
physics=m2;
}
void print_marks(){
cout<<"The maths marks is :"<<maths<<endl
<<"and physics marks is "<<physics<<endl;
}
};
class sports:virtual public student{
protected:
int score;
public:
void set_score(int sc){
score=sc;
}
void print_score(){
cout<<"The sports score is :"<<score<<endl;
}

};
class results:public test,public sports{
private:
float total;
public:
void set_display(){
total=maths+physics+score;
print_roll();
print_marks();
print_score();
cout<<"The total score is :"<<total<<endl;
}
};
void main(){
clrscr();
results suraj;
suraj.set_roll_number(120);
suraj.set_marks(90.2,99);
suraj.set_score(12);
suraj.set_display();
getch();
}