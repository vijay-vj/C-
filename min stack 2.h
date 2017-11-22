#include<iostream>
using namespace std;
class Stack
{
 public:
      Stack(int max);
      void push(int &data);
      void display();
 private:
         int *array;
         int *tos,status;
         int size;
         };
Stack::Stack(int max)
{
                 size=max;
                 array=new int[max];
                 status=0;
                 }
void Stack::push(int &data)
{
     int min;
     int f=0;
     if(status==size)
     {
                       cout<<"stack is full NO pushing can be done:"<<endl;
                       return ;
                       }
    array[status]=data;
     if(status==0)  tos=array;
    else tos++;
    min=array[f];
    if(min==array[status])
    {
    b.push(array[status]);
}
else
{
    b.push(min);
}
   
    status++;
}
 void Stack::display()
{
     int *s;
     s=tos;
     for(int i=0;i<status;i++)
     {
             cout<<*s<<"\t";
             s--;
             }
             }
