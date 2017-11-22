#include<iostream>
using namespace std;
class stack
{
      struct node
      {
             int val;
             node *next;
             }*head;
             int size;
             node *t;
             public:
                    stack();
                    void push(int num);
                    void pop();
                    void display();
                    };
                    stack::stack()
                    {
                                  size=0;
                                  head=NULL;
                                  }
                                  void stack::push(int num)
                                  {
                                       if(size==0)
                                       {
                                                  head=new node;
                                                  head->next=NULL;
                                                  head->val=num;
                                                  t=head;
                                                  size++;
                                                  return;
                                                  }
                                                  else
                                                  {
                                                      node *temp;
                                                      temp=new node;
                                                      temp->next=head;
                                                      temp->val=num;
                                                      head=temp;
                                                      size++;
                                                      return;
                                                      }
                                                      }
                                                      void stack::pop()
                                                      {
                                                           node *temp;
                                                           temp=head;
                                                           while(temp!=NULL)
                                                           {
                                                                            cout<<temp->val;
                                                                            head=temp->next;
                                                                            return;
                                                                             }
                                                                             }
                                       void stack::display()
                                       {
                                            node *temp;
                                            temp=head;
                                            while(temp!=NULL)
                                            {
                                                             cout<<temp->val;
                                                             temp=temp->next;
                                                             }
                                                             return;
                                                             }
                                                             int main()
                                                             {
                                                                 stack s;
                                                                 int req,n,num;
                                                                 cout<<"how many numbers do u need:";
                                                                 cin>>req;
                                                                 cout<<"\n"<<"enter the no.s:";
                                                                 for(int i=0;i<req;i++)
                                                                 {
                                                                         cin>>num;
                                                                         s.push(num);
                                                                         }
                                                                         cout<<"\n"<<"numbers of stack are:";
                                                                         s.display();
                                                                         cout<<"\n"<<"how many number to be popped:";
                                                                         cin>>n;
                                                                         for(int i=0;i<n;i++)
                                                                         {
                                                                                 s.pop();
                                                                                 }
                                                                                 cout<<"elements after pop:";
                                                                                 s.display();
                                                                                 system ("pause");
                                                                                 return 0;
                                                                                 }
                                                                                 
                                                                                             
                                                                                         
                                                                 
                                                             
                                                                                         
