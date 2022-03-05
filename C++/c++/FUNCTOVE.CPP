#include<iostream.h>
#include<conio.h>
int sum(int a, int b){
cout<<"Using function with 2 arguments"<<endl;
return a+b;

}
int sum(int a, int b,int c){
cout<<"Using function with 3 arguments"<<endl;
return a+b+c;

}
int volume(double r, int h){
return (3.14*r*r*h);
}
int cube(int a){
return (a * a *a);
}
int volume(double r){
return (3.14*r*r);
}
void main()
{
clrscr();
cout<<"The sum of 2,3 is "<<sum(2,3)<<endl;
cout<<"The sum of 2,3,5 is "<<sum(2,3,5)<<endl;
cout<<"The volume of cylinder is "<<volume(3,6)<<endl;
cout<<"The volume cube is "<<cube(3)<<endl;
cout<<"The Area of circle is "<<volume(6)<<endl;



getch();
*}
