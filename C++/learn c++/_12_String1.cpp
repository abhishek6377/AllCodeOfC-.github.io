# include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[100]="Abhishek";
	
	char str1[100]="gupta";
	char str2[20];
	cout<<"Enter your name"<<endl;
       //	cin>>str;
      //gets(str);
     	cout<<str<<ends;
     	
     	cout<<"This is length of string "<<strlen(str)<<endl;
     	
//     	cout<<"This is inverse of string "<<strrev(str)<<endl;
     	
     	cout<<"This is copy  of string "<<strcpy(str2,str1)<<endl;
     	cout<<"This is length of string "<<strcat(str,str1)<<endl;
     	cout<<"This is uppercase of string "<<strupr(str)<<endl;
     	cout<<"This is lowercase of string "<<strlwr(str)<<endl;
     	
	cout<<"Function of string"<<endl;
	cout<<"1.Strlen-->This provide the string length"<<endl;
	cout<<"2.Strcpy-->This is copy the  string into another string"<<endl;
	cout<<"3.Strrev-->This is inverse string  "<<endl;
	cout<<"4.strcat--> This is add to string "<<endl;
	return 0;
}
