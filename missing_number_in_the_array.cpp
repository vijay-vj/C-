#include <iostream>
using namespace std; 

int main(){ 
int t, n; 
cin >> t; 

while(t>0){
cin>>n; 
int a[n-1]; 

for(int i=0; i<n-1; i++)
{
	cin>> a[i]; 
}
if(n ==2) { 
cout<< 0;
break;
}

for(int j=0;j<n-2;j++){
	if(a[j+1] - a[j] > 1) {
		cout<<a[j]+1<< endl; 
	}
}

t--;
}

return 0; 
}

