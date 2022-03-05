#include<iostream.h>
#include<conio.h>
class bankdeposite{
int principal;
int years;
float interestRate;
float returnValue;
public:
bankdeposite(){}
bankdeposite(int p,int y,float r);
bankdeposite(int p,int y,int r);// THis is value of int..
void show();


};
bankdeposite :: bankdeposite(int p,int y, float r){
principal=p;
years=y;
interestRate=float(r)/100;
returnValue=principal;
for(int i=0;i<y;i++){
returnValue =returnValue*(1+r);
}

}
bankdeposite :: bankdeposite(int p,int y, int r){
principal=p;
years=y;
interestRate=r;
returnValue=principal;
for(int i=0;i<y;i++){
returnValue =returnValue*(1+r);
}

}
void bankdeposite :: show(){
cout<<"Principal amount waas "<<principal
<<" Return value after "<<years
<<"is "<<returnValue<<endl;
}
void main(){
clrscr();
bankdeposite bd1;
int p,y;
float r;
int R;
cout<<"Enter the value of p y and r"<<endl;
cin>>p>>y>>r;
bd1=bankdeposite(p,y,r);
bd1.show();
cout<<"Enter the value of p y and R"<<endl;
cin>>p>>y>>r;
bd1=bankdeposite(p,y,R);
bd1.show();
getch();
}