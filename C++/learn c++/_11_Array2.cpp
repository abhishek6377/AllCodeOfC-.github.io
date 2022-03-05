#include<iostream>
using namespace std;

int main(){
	int a[3][2]={ 10,20,
               		30,40,
					50,60};
	printf("Enter number\n");
	for(int i=0;i<3;i++)//r0w
	{
		for(int j=0;j<2;j++) //column
		{
//		scanf("%d",&a[i][j]); 
          cout<<a[i][j]<<ends;                       //10
		   				     	// 20 ,20
	    }
	    cout<<endl;
  }
//  printf("Array element\n");
//  	for(int i=0;i<=2;i++)
//	{
//		for(int j=0;j<=2;j++)
//		{
//		
//		cout<<a[i][j]<<ends;
//	    }
//	    cout<<endl;
//  }
	
	return 0;
}
