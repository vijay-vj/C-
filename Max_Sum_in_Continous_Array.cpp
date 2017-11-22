#include <iostream>
using namespace std; 
int main(){ 
int a[] = {-1,-3,4,-1,-2,5,3}; 
int max_end_here=0, max_sum_till =0;
int size = sizeof(a)/sizeof(*a); 
int start_pos = 0, end_pos = 0 ;
for(int i=0; i<size; i++)
{
	max_end_here+= a[i]; 
	
	 
	if (max_end_here<0 ) 
	{
		max_end_here = 0; 
		start_pos = i+1;
	}
	
	if (max_end_here > max_sum_till) {
		max_sum_till=max_end_here; 
		end_pos = i;
	}
}

cout<< " SUm Max: " << max_sum_till <<endl ; 
cout << "Start and end pos are: " << start_pos << " " << end_pos << endl; 
system("pause"); 
return 0; 

}
