#include <iostream>
using namespace std; 
int main(){ 
int a[] = {1,2,3,1,1,5,3}; 
int size = sizeof(a)/sizeof(*a); 
cout<<size; 
int start_pos = 0, end_pos = 0 ;

int sum_tot = 12, sum_till = 0; 

for(int i=0; i<size; i++)
{


if(sum_till < sum_tot) {
	sum_till = sum_till+a[i];
	cout<< "IN sum_till < sum_tot << "<< i << " "<< a[i]<< " "<< sum_till << " " << endl; 
};


if (sum_till == sum_tot) {
	end_pos = i-1; 
	cout<<"Bazungaaa....!! "<<start_pos << " " << end_pos<< endl;
}
else if (sum_till > sum_tot){ 
cout<< "Enter here" << endl; 
	while(sum_till > sum_tot) {
		cout<< "Here it is.. "<<a[start_pos] << endl; 
		sum_till = sum_till - a[start_pos] ;
		start_pos ++; 
	}
	cout<< "AFter start_pos: " << start_pos << " " << sum_till << endl ;
}
}	 


for(int i= start_pos; i<=end_pos; i++)
{
	cout<<a[i]<<" "; 
}

cout<< endl;
system("pause"); 
return 0; 

}
