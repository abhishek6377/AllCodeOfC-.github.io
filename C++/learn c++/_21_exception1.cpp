//Exception is unecepted ,unwanted and abnoraml sitution occured in 
//runtime that is called exception
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Exception handling starts"<<endl;
	cout<<"Enter two number"<<endl;
		cin>>a>>b;
	try{
		int c;
//		if(b==0){
		throw b;	
//		}
		 c=a/b;
		cout<<"a divide b "<<a/b;
		 	
	}
	catch(int x){
	cout<<"You enter Zero please enter another number : "<<x<<endl;
	}


	return 0;
}
