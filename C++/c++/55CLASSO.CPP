#include<iostream.h>
#include<conio.h>
class baseclass{
public:
int var_base;
void dispaly(){
cout<<"DIspalying base class variable var_base "<<var_base<<endl;
//cout<<"Dispalying DErived class variable var_derived "<<var_derived<<endl;
}
};
class derivedclass :public baseclass{
public:
int var_derived;
void display(){
cout<<"Displying BAse class variable var_base "<<var_base<<endl;
cout<<"Displaying Derivedd class variable var_derived "<<var_derived<<endl;


}

};
void main()
{
clrscr();
baseclass * base_class_pointer;
baseclass obj_base;
derivedclass obj_derived;
base_class_pointer = &obj_derived;
//pointing base class pointer to derived class
base_class_pointer->var_base=34;
//base_class_pointer ->var_derived=134;//weill throw a error
base_class_pointer->display(										);
base_class_pointer->var_base=3400;
base_class_pointer->display();

derivedclass * derived_class_pointer;
derived_class_ponter = &obj_derived;
derived_class_pointer->var_base=9448;
derived_class_pointer->var_derived=98;
derived_class_pointer->display();

getch();
}