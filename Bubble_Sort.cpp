#include <iostream>

using namespace std; 

int main() { 

int a[] = {10,59,46,44,348,94,25}; 
// 10,46,44,59,94,25,348 
int size = 7, temp;

for(int j=0; j<7;j++ )
 {
 
for(int i =0;i<size;i++) { 
if(a[i] > a[i+1]) {
	temp = a[i]; 
	a[i]= a[i+1]; 
	a[i+1] = temp; 

}
	
}
	size --; 
}
for(int k=0;k<7;k++)
{ 
cout<<a[k] << " "; 
}
system("pause"); 
return 0; 
} 
