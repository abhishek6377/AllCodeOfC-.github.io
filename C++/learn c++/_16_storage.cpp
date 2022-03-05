 #include<iostream>     //extern variable 
 using namespace std;
 extern int add(int a ,int b );
 int main(){
	int a,b;
	cout<<"Enter number"<<endl;
	cin>>a>>b;
	int c=add(a,b);
	cout<<"Sum ="<<c;
	
	
	return 0;
}
#include"_17_add.cpp"
