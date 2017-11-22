#include <iostream>

using namespace std;


int main()
{
	
	int a[] = {1,2,3,4,5,6}; 
	int k = 3, w = 10, temp1; 
	int len = sizeof(a)/sizeof(*a); 
//	cout<< "Length of the array: " <<(sizeof(a)/sizeof(*a)) << endl; 
//		for(int i = sizeof(a)/sizeof(*a); i >= k; i--)
//		{
//			a[i+1] = a[i]; 
//			
//		}
//	
//	
//	a[k] = w; 
//	
	for(int i=k; i <=len;i++)
	{ 
	temp1 = a[i];
	a[i] = w; 
	
	w = temp1;  
	
	}
	
	for(int i=0;i<=sizeof(a)/sizeof(*a); i++)
	{
		cout<<"value at index"<< i << " is: "<< a[i]<<endl; 
	 } 
	
	return 0; 
	system("pause");
}
