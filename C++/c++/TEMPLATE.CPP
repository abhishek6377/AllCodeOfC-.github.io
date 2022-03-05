#include<iostream.h>
#include<conio.h>
template< class  t>
add(t a ,t b){
if('+'){
return a+b;
}
}
template< class  s>
sub(s a ,s b){
else if('-'){
return a-b;
}
}
template< class  r>
mul(r a ,r b){
else if('*'){
return a*b;
}
}
template< class  m>
div(m a ,m b){
else if('/'){
return a/b;
}
}
void main()
{
clrscr();
int a, b;
char c;
cout<<"Enter  first number :"<<endl;
cin>>a;
cout<<"Enter a operator "<<endl;
cin>>c;
cout<<"Enter Second number ;"<<endl;
cin>>b;
cout<<"The addition is :"<<add(a,b);
cout<<"The subsration is :"<<sub(a,b);
cout<<"The multiple is :"<<mul(a,b);
cout<<"The division is :"<<div(a,b);

getch();
}
