#include<iostream.h>
#include<conio.h>
template<class t1,class t2>
class myclass{
public:            // Class template with multiple parmeters (one ,two or more than two)
///template<class t1.class t2 ...(comma separted)>
t1 data1;
t2 data2;
myclass(t1 a, t2 b){
data1=a;
data2=b;
}
void display(){
cout<<this->data1<<endl<<this->data2;

}

};
void main()
{
clrscr();
//myclass<int ,char> obj(1,'A');
myclass<char ,float> obj('B',1.23);     //   we can change variable take anything
obj.display();
getch();
}