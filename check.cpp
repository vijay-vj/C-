#include<iostream>
using namespace std;
int main()
{
    int *p,*q;
    int **i;
    int a,b;
    a=5;
    i=&p;
    cout<<"1:"<<&i<<" ";
    cout<<"2:"<<&(*i);
    cout<<"3:"<<i<<" "<<"4:"<<*i<<" "<<"5:"<<**i<<" ";
    p=&a;
    cout<<"6:"<<p<<" ";
    cout<<"7:"<<*p;
    system ("pause");
    return 0;
}
