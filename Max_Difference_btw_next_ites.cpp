#include <iostream>
#include <cmath>

using namespace std; 
int main() {
	int first, second, max_diff; 
	
	int a[] = {1,10,12,14,1,13}; 
	int size = sizeof(a)/ sizeof(*a); 
	
	 //Blunt Method
	for(int i=0; i < size; i++) { 
	
	for(int j=i+1;j<size; j++){
	
	if (max_diff < a[j] - a[i])	
	max_diff = a[j] - a[i] ; 
	cout<< " Iteration: "<< i << " "<< j << " " << max_diff << endl; 
	}
	
	}
	
	
/*
	// Best case scenario
	int min = a[0];
	max_diff  = 0; 
	for(int i=0; i<size; i++){ 
	
	if(min > a[i]) { 
	min = a[i]; 
	
	}
cout<< " Min: "<< min << endl; 
if(abs(a[i] - min ) > abs(max_diff - min)){
	max_diff = a[i] - min;
}
	
	
	}
*/	
	cout<< "Max diff is:"<< max_diff << endl ;
	
	system("pause"); 
	return 0;
}
