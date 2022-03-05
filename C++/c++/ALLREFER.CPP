#include<iostream.h>
#include<conio.h>
/*int swap(int a,int b){
int temp;    --->This is not work function Refernce
temp=a;
a=b;
}*/
/*int swapPointer(int *a,int *b){
int temp;
temp=*a;
*a=*b;              //--->THis is pointer by refernce
*b=temp;
return 0;
}
*/
int swaprefervari(int &a,int &b){
int temp;
temp=a;
a=b;              //--->THis is refernce variable**
b=temp;
return 0;
}
void main()
{
int a=9,b=10;

clrscr();
cout<<"The value of a "<<a<<"The value of b "<<b<<endl;
//swap(a,b);  --->This is not work
//swapPointer(&a,&b); -->this is pointer by refernce
swaprefervari(a,b);//-->This is reference by variabble

cout<<"The value of a "<<a<<"The value of b "<<b<<endl;

getch();

}