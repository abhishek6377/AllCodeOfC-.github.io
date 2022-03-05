#include<iostream.h>
#include<conio.h>
void main()
{               //Array*****************/
//THE two way using of array
//// first is
clrscr();
int m[40];
m[0]=123;
 m[1]=574;
 m[2]=175;
 m[3]=712;
//int math[0]=12357;
cout<<m[0]<<endl;
m[2]=125;//// We can change also marks;;;;
cout<<m[1]<<endl;
cout<<m[2]<<endl;
cout<<m[3]<<endl;
//***********************************************************************//
int a[]={12,25,45,89};  //second one is

/*cout<<a[0]<<endl;
cout<<a[1]<<endl;
cout<<a[2]<<endl;
cout<<a[3]<<endl; */
//for(int i=0;i<4;i++){            //-->using loop and Array**********///
//cout<<"the value of a "<<i<<" is "<<a[i]<<endl;

/* // Using while loop
  int i=0;
  while(i<4)
{
  cout<<"the value of a "<<i<<" is "<<a[i]<<endl;

  i++;
  }
//}*/
int i=0;
do{
cout<<"the value of a "<<i<<" is "<<a[i]<<endl;
  i++;
}while(i<4);
getch();





}