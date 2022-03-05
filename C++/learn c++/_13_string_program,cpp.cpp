#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[200];
	char str1[200];
	int num;
	cout<<"1. String length"<<endl;
	cout<<"2. String uppercase"<<endl;
	cout<<"3. String lowecase"<<endl;
	cout<<"4. String Reverse"<<endl;
	cout<<"5. String Copy"<<endl;

	cout<<"Enter sentence "<<endl;
	gets(str);
		cout<<"Enter a choice"<<endl;
	cin>>num;
	switch(num){
		case 1:
			cout<<"This is provide length "<<strlen(str);
			break;
			
			case 2:
			cout<<strupr(str);
			break;
			
				case 3:
			cout<<strlwr(str);
			break;
				case 4:
			cout<<strrev(str);
			break;
//				case 5:
//			cout<<strlen(str1,str)<<endl;;
//			cout<<"You string  transfer into str1 "<<endl;
//			break;
			default:
				cout<<"Inavalid choice";
		
	}
	return 0; 
}
