#include<iostream.h>
#include<conio.h>
template<class t>
class suraj{
public:
t data;
suraj(t a){
data =a;

}
void display();

};
template<class t>
void suraj<t>:: display(){
cout<<data;
}
void fun(int a){
cout<<"I am first fun()  "<<a<<endl;
}
template<class t>
void fun1( t a){
cout<<"I am template func() "<<a<<endl;
}
void main()
{
clrscr();
//suraj<float>s(5.7);
//suraj<char> s('a');
//suraj<int> s(87);
//cout<<s.data<<endl;
//s.display();

      //fun(4);         //Exact match take the highest prioriity
	fun1(4);        //Exact match takes the highest priority
getch();
}