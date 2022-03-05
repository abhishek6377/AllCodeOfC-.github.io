#include<iostream>
#include<fstream>
//#include<string.h>

using namespace std;
int main(){
	string st= "hello world my name is khan";
	ofstream abhi("world.txt");
	abhi<<st;
	return 0;
}
