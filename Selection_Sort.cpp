#include <iostream>
using namespace std; 
int main() { 
int a[] = {10,59,46,44,348,94,25}; 
// 10,46,44,59,94,25,348 
int size = 7, temp , pos, min;


for(int i=0; i<size; i++){ 
cout << "start Iteration: " << i << " "<< endl; 
min = a[i]; 
cout<<min<<endl;
for(int j=i; j<size; j++){
	if(a[j] <= min) 
	{
		pos = j; 
	}
}
cout<<endl<<a[pos]<<endl; 
temp = a[i]; 
a[i] = a[pos]; 
a[pos] =  temp; 


for(int k=0;k<7;k++)
{ 
cout<<a[k] << " ";
}
cout << "Iteration: " << i << " "<< endl; 
}
cout<<"AFter" <<endl; 
for(int k=0;k<7;k++)
{ 
cout<<a[k] << " "; 
}

system("pause"); 
return 0; 
}
