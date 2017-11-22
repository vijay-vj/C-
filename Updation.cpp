#include <iostream>
using namespace std; 
int main()
 {
 	
	int a[] = {1,2,3,4,5,6}; 
	int k = 3; 
	int w= 10; 
	a[k] = w;
 	for(int i=0;i<sizeof(a)/sizeof(*a)-1; i++)
	{
		cout<<"value at index"<< i << " is: "<< a[i]<<endl; 
	 } 
	 
 }
