#include<iostream.h>
#include<conio.h>
int factorial(int n){
if(n<=1){
return 1;
}
return n*factorial(n-1);
}
void main()
{
int a;
clrscr();
cout<<"Enter a number\n";
cin>>a;
cout<<"The Factorial "<<a<<" is "<<factorial(a)<<endl;
getch();


}