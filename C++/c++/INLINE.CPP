#include<iostream.h>
#include<conio.h>
inline int product(int a,int b){
//static int c=0;   //This Excutes only once
//c=c+1;//next time  this fuction is run ,the value of c will be retained**
//return a*b+c;
return a*b;
}
void main()
{
int a,b;
clrscr();
cout<<"Enter a number a and b\n";
cin>>a>>b;
cout<<"product is "<<product(a,b)<<endl;
cout<<"product is "<<product(a,b)<<endl;
cout<<"product is "<<product(a,b)<<endl;
cout<<"product is "<<product(a,b)<<endl;
cout<<"product is "<<product(a,b)<<endl;
cout<<"product is "<<product(a,b)<<endl;
//cout<<"product is "<<product(a,b);
getch();





}