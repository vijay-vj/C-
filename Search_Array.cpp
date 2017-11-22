#include <iostream>
using namespace std; 
int main()
{
	int a[]={1,2,3,4,5}; 
	int k =4; 
	int i;
	for(i=0; i<sizeof(a)/sizeof(*a); i++) 
	{
		if(a[i] == k) 
		{
			break;
		}
	}
	cout<< "Raja found at position: " << i+1<<endl;
	
	system("pause");
}
