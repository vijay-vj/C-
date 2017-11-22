#include <iostream>

using namespace std; 

int main()

{
	int a[] = {1,2,3,4,5}; 
	int k =2; 
	
	for(int i=k;i<sizeof(a)/sizeof(*a); i++) 
	{
		a[i]=a[i+1];
	 } 
	 
	 
	 	for(int i=0;i<sizeof(a)/sizeof(*a)-1; i++)
	{
		cout<<"value at index"<< i << " is: "<< a[i]<<endl; 
	 } 
	 
	
}
