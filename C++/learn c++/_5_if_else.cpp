//if means condition is true it excutes the  if part 
//other wise it go else part and ecutes else part
#include<iostream>
using namespace std;
int main(){
	int i=20;
 
//	if(i<18){
//		cout<<"You are cannot drive";
//	}
////	else if( i>18){
////		printf("You are drive");
////	}
//else{
//	printf("You are drive");
//}
int a,b,c;
cout<<"using nested if else\n";
cout<<"TO find greater number\n";
cout<<"Enter three number\n";
cin>>a>>b>>c;
//if(a>b){
//	if(b>c){
//		cout<<"b="<<b<<endl;
//	}
//	else{
//		cout<<"c="<<c<<endl;
//	}
//	
//}
//else{
//	if(b>c){
//		cout<<"b="<<b<<endl;
//	}
//	else{
//		cout<<"c="<<c<<endl;
//	}
//}
 cout<<"using this by switch case";
 int d=(a>b)?(b>c)?(a>c)?a:b:c
 cout<<d;
	return 0;
}

