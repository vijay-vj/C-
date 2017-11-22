#include <iostream>

using namespace std; 

int main() 

{ 

int a[6] = {3,5,9,4,8,7};
int hash[100]= {}; 
int k =12; 
for (int i=0; i< 6; i++)
{
	hash[a[i]] = i;
}

for(int i=0; i< 6; i++)
{
//	cout<<"value is: "<< hash[k-a[i]];
	if(hash[k-a[i]] != NULL) {
		cout << "found: " << a[i] << " and " << k-a[i]<< endl;
	}
	
	
}
 
 system("pause");
}
