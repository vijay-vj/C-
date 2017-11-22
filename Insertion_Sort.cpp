#include<iostream>
using namespace std; 
int main() { 


int a[] = {10,59,46,44,348,94,25}; 
// 10,46,44,59,94,25,348 
int size = 7; 
int temp, j,key;

for(int i=0;i<size; i++)
{

key = a[i];
j = i-1; 

while(j > 0 && a[j] > key ) 

{
	a[j+1] = a[j];
	j=j-1;
}
 a[j+1] = key;
//a[j+1] = a[i];

}

for(int k=0;k<7;k++)
{ 
cout<<a[k] << " "; 
}

system("pause"); 
return 0; 
}
