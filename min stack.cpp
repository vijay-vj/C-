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
                 Stack b(size);
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

int main()
{
    int size,data;
    cout<<"\nEnter size of stack:";
    cin>>size;
    Stack s(size);
 Stack b(size);
    cout<<"\nEnter the no. of elements you wanna enter :";
    cin>>size;
    for(int i=0;i<size;i++)
    {
            cout<<"\nEnter data:";
            cin>>data;
            s.push(data);
            s.display();
            b.display();
            }
    system("pause");
    return 0;
}
     
