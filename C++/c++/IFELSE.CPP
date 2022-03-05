#include<iostream.h>
#include<conio.h>
void main(){
int age;
clrscr();
cout<<"Enter the number:"<<endl;
cin>>age;
if(age<=18){
cout<<"You are not vote:";
}
else if(age>=15){
cout<<"You are  vote:";
}
else if(age<=45 && age<=60){
cout<<"You are Adult:";
}
else{
cout<<"Invalid age";
}
getch();
}

