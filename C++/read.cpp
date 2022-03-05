#include<iostream>
#include<fstream>
//#include<string.h>
using namespace std;
int main(){
	string st;
	ifstream abh("world1.txt");
	abh>>st;
	//cout<<st;
	getline(abh,st);
	return 0;
}
