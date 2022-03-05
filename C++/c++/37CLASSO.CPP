#include<iostream.h>
#include<conio.h>
class employee{
public:
int id;
float salary;
employee(int inpId)
{
id=inpId;
salary=34.0;

}
employee(){}

};
// Derived class syntax
//class {{derived-class-name}}:{{visiblity-mode}} {{base-class-name}}
//{
//class memberr/methods/etc....
//}
/*note:
1.default visiblity mode is private
2.public visiblity mode:public memberr of the class become Public member of the derived class
3.private visiblity Mode:public menber of the base class becomes Private member of the derived class
4. Private member are never inherited
*/
class programmer:public employee
{
public:
int languagecode;
programmer(int inpId)
{
id= inpId;
languagecode=9;
}
void getData(){
cout<<id<<endl;
}
};
void main()
{
clrscr();
employee suraj(2),rohan(3);
cout<<suraj.salary<<endl;
cout<<rohan.salary<<endl;
programmer skillf(23);
cout<<skillf.languagecode<<endl;
cout<<skillf.id<<endl;
skillf.getData();
getch();
}