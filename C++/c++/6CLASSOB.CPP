#include<iostream.h>
#include<conio.h>
class shop{
int itemId[100];
int itemPrice[100];
int counter;
public:
void initcounter(void){counter=0;}
void setprice(void);
void getdisplay(void);
};
void shop :: setprice(void )
{
cout<<"Enter a item Id no is :"<< counter+1<<endl;
cin>>itemId[counter];
cout<<"Enter a price of your item is :"<<endl;
cin>>itemPrice[counter];
counter+1;
}
void shop ::getdisplay(void){
for(int i=0;i< counter;i++){
cout<<"The item id no is "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
}

}
void main()
{
clrscr();
shop dukkan;
dukkan.initcounter();
dukkan.setprice();
dukkan.setprice();
dukkan.getdisplay();
getch();
}