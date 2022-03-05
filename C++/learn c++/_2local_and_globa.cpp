#include<iostream>
using namespace std;
int b=100;// this is global variable this variable access any one 
static int c=101;
int main(){
	static int d=102;
	int a=90;// this is local variable which access in parameter only 
	cout<<"This is local variable "<<a<<endl;
	cout<<"This is gloabal variable "<<b<<endl;
	cout<<"This is static local  variable "<<c<<endl;
	cout<<"This is  static gloabal variable "<<d<<endl;
	return 0;

}
//static variable are two types local and global 
//if you declare in parmeter with keyword of static it is  static local variable  what 
//difference b/w local and static if you simple decalre it is local it is excuted till parameter 
//but static local excuted till the program 
//same global that is static variable 
