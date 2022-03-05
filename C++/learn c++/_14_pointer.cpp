#include<iostream>
using namespace std;
int main(){
	int a=90;
	int *p;
	p=&a;
	int **q;
	q=&p;
	cout<<"The address of a:-"<<&a<<ends<<endl;
	cout<<"The address of a in p:-"<<p<<endl;
	
	cout<<"The Value of a:-"<<a<<endl;
	
	cout<<"The Value of p:-"<<*p<<endl;
	
	cout<<"The address of p:-"<<&p<<endl;
	
	cout<<"The Value of q:-"<<**q<<endl;

	return 0;
}
