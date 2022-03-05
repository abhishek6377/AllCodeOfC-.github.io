#include<iostream.h>
#include<vector.h>
#include<conio.h>
void display(vector<int> &v){
for(int i=0;i<v.size();i++){
cout<<v[i]<<" ";

}
cout<<endl;
}
void main()
{
vector<int>vect1;
int element;
for(int i=0;i<4;i++)
{
cout<<"Enter an element to add to this vector";
cin>>element;
vec1.push_back(element);
}
display(vec1);
getch();
}