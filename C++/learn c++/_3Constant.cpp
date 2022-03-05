//Keyword are nothing but it is reserved word which already define by compiler 
//48 types of keyword in c++
//keyword are always in lowercase
//eg int float char void private public protected while for do if and else...
//*********************************************************************************
//Constant means if you define any value it not change in runtime that is called constant
//constant are also called literal
//********************************************************************************************
//Identifier means give name of variable and function and class that is called Identifier
//We cannot use the keyword of c++ as identifier. 
 #include<iostream>
 using namespace std;
 int main(){
 	int a=90;
 	a=100;
 	cout<<a<<endl;// in this case value are change because it local variable
 	const int b=10;
// 	b=10;// it give error because we use const keyword by const we cannot change value 
 	cout<<b;
 	return 0;
 }

