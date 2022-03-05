#include<iostream>
using namespace std;
int b=100;// this is global variable this variable access any one 
int main(){
	int a=90;// this is local variable which access in parameter only 
	cout<<"This is local variable "<<a<<endl;
	cout<<"This is gloabal variable "<<b<<endl;
	return 0;
}
