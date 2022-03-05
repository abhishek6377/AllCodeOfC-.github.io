#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter year"<<endl;
	cin>>year;
	if(year%4==0)
	{
		cout<<"This  is leap year :"<<year;
	} 
	else if(year%100==0)
	{
		cout<<"This  is leap year :"<<year;
	} 
	else if(year%400==0)
	{
		cout<<"This  is leap year :"<<year;
	} 
//     if((year%4==0 )&& (year%400==0 )&& !(year%100==0)){
//     	cout<<"This is leap year "<<year;
//	 }
		
	
	else{
		cout<<"This is not leap year :"<<year;
	}
	return 0;
}
