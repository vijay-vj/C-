#include <iostream>
#include <string>

using namespace std; 
int main() {
	
	string test_string = "TESTTSET";
	int len = test_string.length();
	int flag = 0; 
	cout<< len; 
	
	for(int i=0; i<len/2; i++){
		cout<< "Iteratino:" << i <<" "<< test_string[i] << " "<< test_string[len-1-i] <<endl; 
		if(test_string[i] != test_string[len-1-i]){
			cout<<"Not a palindrome...!! "; 
			flag = 1; 
		}
	}
	if(flag ==0){
		cout<< "Yupp... This is a palindrome,, !!! ";
	}
}
