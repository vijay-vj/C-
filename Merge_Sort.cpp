#include <iostream>
using namespace std; 

	int a[] = {10,59,46,44,348,94,25}; 
// 10,46,44,59,94,25,348 
int size = 7, temp , pos, min;

void mergesort(int a[], int l, int h) { 

if (l<h) { 

int r = (l+r)/2; 
mergesort(a, l,r);
mergesort(a,r + 1 , h);

merge(a,l,r,h); 

}
}

void merge(int a[], int l, int r, int h){
	
	int n1, n2 ;
	n1 = r-l; 
	n2 = h-r; 
	int temp_arr1[n1], temp_arr2[n2]
	for(int i =0; i< n1; i++) { 
	temp_arr1[i] = a[l+1];	
	}
}

int main(){

mergesort(int a[],0, size-1); 
	
for(int k=0;k<7;k++)
{ 
cout<<a[k] << " "; 
}
}
