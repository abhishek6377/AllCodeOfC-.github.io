#include<iostream>
using namespace std;
class A
{
	public:
		void scope_resulation();
		void message()
		{
			cout<<"I am inside class function "<<endl;
		}
};
void A::scope_resulation()
{
	cout<<"That way to use function outside of class "<<endl;
}
int main()
{
	A obj;
	obj.scope_resulation();
	obj.message();
	return 0;
}
