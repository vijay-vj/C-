#include<iostream>
using namespace std;
//const int Max 25;
class Stack
{
 public:
      Stack(int max);
      void push(int &data);
      void pop();
      void search(int &data);
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
     if(status==size)
     {
                       cout<<"stack is full NO pushing can be done:"<<endl;
                       return ;
                       }
     array[status]=data;
    if(status==0) tos=array;
    else tos++;
    status++;
}
void Stack::pop()
{
     if(status==0)
     {
                  cout<<"\nNO elements to pop. stack is Empty:";
                  return ;
                  }
     status--;
     tos--;
     }
void Stack::search(int &data)
{
     int *s,num;
     s=tos;
     for(int i=0;i<status;i++)
     {
     if(*s==data) 
     {
                  cout<<"Found:\n";
                  return ;
                  }
                  s--;
                  }
     cout<<"\nNO data found:";
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
