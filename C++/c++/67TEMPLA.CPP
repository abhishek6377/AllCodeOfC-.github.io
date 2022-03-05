#include<iostream.h>
#include<conio.h>
	float funaverage(int a ,int b){

	float avg =(a+b)/2.0;
	return avg;
	}
	float funaverage2(int a ,float b){

	float avg =(a+b)/2.0;
	return avg;
	}
	template<class t1,class t2>
	float funaverage2(t1 a ,t2 b){

	float avg =(a+b)/2.0;
	return avg;
	}

	template<class t>
	void swapp(t &a,t &b){
		t temp=a;
		a=b;
		b=temp;
	}
void main()
{
clrscr();
/*float a;
a=funaverage(5,23);
cout<<"The average of these numberr is \n"<<a; */

float a;
a=funaverage2(5,2.3);
cout<<"The average of these number is \n"<<a;
//cout<<pricision(2);
int x=2;
int y=3;
swapp(x,y);
cout<<x<<endl<<y;
getch();
}