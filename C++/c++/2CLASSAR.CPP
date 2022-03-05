#include<iostream.h>
#include<conio.h>
class shop{
private:
int itemId[100];
int  itemPrice[100];
int counter;
public:
void initCounter(void){


counter=0;
}
void setPrice(void);
void displayPrice(void);
};
void shop :: setPrice(void)
{
cout<<"Enter Id of Your item no "<<counter+1<<endl;
cin>>itemId[counter];
cout<<"Enter Price of your item"<<endl;
cin>>itemPrice[counter];
counter++;
}
void shop ::displayPrice(void){
for(int i=0;i<counter;i++){
cout<<"The Price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
}

}
void main(){
shop dukkan;
dukkan.initCounter();
dukkan.setPrice();
dukkan.setPrice();
dukkan.setPrice();
//dukkan.setPrice();
dukkan.displayPrice();

getch();
}