#include <iostream>

using namespace std;

int n; 
int main() 
{ 

int *ip, x;
ip= &x;

*ip = 10; 


cout << "First Program after a long time.. "<<"\n";
cin >> n; 

cout<< "ENtered Number is: " << *ip << " " << ip<<endl; 

system("pause");

}
