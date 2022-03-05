#include<iostream>
using namespace std;
int main()
{
//	goto statement is jumping statement which is use to label the program.
//  goto is label(:) ,first we use goto keyword to declare the variable and the we use colon
    // to initialise value that is called goto statement 
   

	int a;
	cout<<"Enter age "<<endl;
	cin>>a;
   	if(a>=18)	
	 goto vote;
	 else
	 goto nonvote;
       
	vote:
		cout<<"You are Eligible to give Vote";
		return 1;
		nonvote:
			cout<<"You are not Eligible to give the vote";
	return 0;
}
