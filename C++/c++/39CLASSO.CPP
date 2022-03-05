#include<iostream.h>
#include<conio.h>
class base{
protected:
int a;
private:
int b;
};
class derived:protected base{ //  this is proteccted

};
/*For a protected member:
	   public derivation  private derivation protected derivation
private  member   Not Inheritance   not Inhertiance      not Inheritance
protected member      protected       private                 protected
public  member      Public              private                protected
*/
void main(){
clrscr();
base b;             // will not work since
derived c;
cout<<b.a<<endl; // This is not run because it is protected..
cout<<d.a<<endl;

getch();
}