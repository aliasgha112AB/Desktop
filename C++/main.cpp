#include <iostream>

using namespace std;

int main(){


	int c=0 ;

	int a[5] ;


	for(int i=0 ; i<=4; i++){
		cin>>a[i] ;
	}



	cout<<"          "<<endl ;

	for(int j=0;j<=4; j++)

	if(a[j]<0)
	{
		cout<<a[j]<<endl ;
		c++ ;

	}


	cout<<"     Yuor number is : "<<c ;



}
