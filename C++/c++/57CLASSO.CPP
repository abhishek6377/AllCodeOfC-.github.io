/*
//Rules of virtual functions
1.THey cannot be static
2.They are accessed by object pointers
3.virtual functions can be a friend of another class
4.A virtual function in base class might not be used
5.If a virtual function is definedd in a base class ,there is no necessity
of redefining it in the derived class */
#include<iostream.h>
#include<conio.h>
void main()
{
class cwh{
protected:
string title;
float rating;
public:
cwh( string s, float r){
title=s;
rating=r;
}
virtual void display(){}

};
class cwdvideo:public cwd{
float videolenght;
public:
cwdvideo(string s,float r float vl):cwd(s,r){
videolength=vl;
}
void display(){
cout<<"This is an amazing video with title "<<title<<endl;
cout<<"Rating :"<<rating<<"Out of 5 stars "<<endl;
cout<<"length of this video is :"<<videolength<<"minutes"<<endl; 																																																																																																																														"
}

};
class cwdtext:public cwh{

int words;
public:
cwhtext(string s,float r,int wc):cwh(s,r){
words=wc;
}
void display(){
cout<<"This is am amazing text tutorial with title "<<title<<endl;
cout<<"Ratings of this text tutorial ; "<<rating<<" out of 5 stars "<<endl;
cout<<"No of words in  this text tutorioal is :"<<words<<" words"<<endl;
}
};
void main(){
string title;
float rating ,vlen;
int words;

title = "Django tuturial ";
vlen =4.56;
rating=4.98;
cwdvideo djvideo(title ,rating ,vlen);
// djvideo ,display();
// for code with harry text
title ="django tuturial text "
words=433;
rating=4.19;
cwhtext djtext(title,rating ,words);
// djtext.display();

cwh*tuts[2];
tuts[0]=&djvideo;
tuts[1]=-&djtext;
tuts[0]->display();
tuts->display();
getch();

}