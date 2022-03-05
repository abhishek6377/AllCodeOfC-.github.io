//macro is piece of code there we give some name for code readablity 
//macro always use with # define 
//two types of macro use 
//1.objective where we decalred short name of anything and we use short name in program 
#include<iostream>
#define num 2// in this case i want use 2 we write the num.
#define greater(a,b) ((a>b)?a:b)
using namespace std;
int main(){
	// this is for objective macro 
//	for(int i=1;i<=10;i++){
//		
//		cout<<num<<"*"<<i<<"="<<num*i<<endl;
//	}
// this is function macro 
cout<<"Greater number find "<<greater(123,90)<<endl;

cout<<"Greater number find "<<greater(123,900);
	return 0;
}
