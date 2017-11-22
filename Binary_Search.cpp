#include <iostream>

using namespace std; 

int main()
{
	int a[7] = {10,20,30,40,50,60,70}; 
	int n,mid,k=1; 
	int end = 7	; 
	int start = 0;
//	for(int i=0;i<10; i++) { 
//	cout<<"Enter the number for: "<< i<< " position"; 
//	cin >> n; 
//	a[i] = n; 
//	}
//	
while(k=1) {

	cout<<"Enter the number to be searched"; 
	cin>> n;
	mid = end/2;  
	while(mid <= end) {
	 if(n == a[mid])
	 { 
	 cout<<"Found it at: " << mid<<endl; 
	 
	 break;
	 }
	 else if (n < a[mid]) {
	 	end = mid; 
	 	mid = (end-start)/2;
	 	cout<< "Values here where n< a[mid]: " << start << " " << mid << " " << end << endl;
	 }
	 else if (n > a[mid]) {
	 	start = mid; 
	 	mid = (end +start) / 2;
	 	cout<< "Values here where n> a[mid]: " << start << " " << mid << " " << end << endl;
	 }
	}
	cout<< "Press 1 to continue the search: " <<endl ;
	cin >> k;
}	
system("pause")	;
return 0; 	
	
}
