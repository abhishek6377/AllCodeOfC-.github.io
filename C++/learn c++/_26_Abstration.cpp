#include<iostream>
using namespace std;
//Abtsration is most important features of oops. It means show essential information and hiding
//the background information that is called Abstration 
class Bank{
	private:
		int pin;
		int balance;
		public:
		string B_name;
		string IFSC;
		int acc_no;
		void input()
		{
				pin=5096;
				balance=90000;
				B_name="Union bank of India";
				IFSC="UNIONx907";
				acc_no=903984734;
		}
			void output()
			{
				cout<<"My Bank pin "<<pin<<endl;
				cout<<"My Bank Balance "<<balance<<endl;
				cout<<"My Bank Name "<<B_name<<endl;
				cout<<"My Bank IFSC "<<IFSC<<endl;
				cout<<"My Account number "<<acc_no<<endl;
//				cout<<"My Bank pin"<<pin<<endl;
			}
};
int main(){
	Bank ob;
	ob.input();
	ob.output();
	printf("**********************************************\n");
	cout<<"Anyone to try my details"<<endl;
	// pin and bankbalance not check by other beccause it private this info check by only me
//		cout<<"Anyone Bank pin "<<ob.pin<<endl; 
//				cout<<"Anyone try to check Bank Balance "<<ob.balance<<endl;
				cout<<"Anyone try to check Bank Name "<<ob.B_name<<endl;
				cout<<"Anyone try to check Bank IFSC "<<ob.IFSC<<endl;
				cout<<"Anyone try to check Account number "<<ob.acc_no<<endl;
	
	return 0;
}
