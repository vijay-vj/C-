#include<iostream>
using namespace std;
class ll
{
      struct node
      {
             int val;
             node *next;
             }*head;
             int num,size;
             public:
                    ll();
                    void insert(int num);
                    void delet(int num);
                    void search(int num);
                    };
                    ll::ll();
                    {
                     size=0;
                     head=NULL;
                     }
                     void ll::insert(int num)
                     { node *t;
                          if(size==0)
                          {
                                    head->val=num;
                                    head->next=NULL;
                                    t=head;
                                    size++;
                                    return;
                                    }
                          else
                          {
                              node *temp;
                              temp->val=num;
                              temp->next=t;
                              head=temp;
                              size++;
                              return;
                              }
                              }
                        void search(int num)
                        {
                             node *temp;
                        temp=head;
                             whlile(temp!=NULL)
                             {
                                               if(data==temp->val)
                                               {
                                                                 
                                                                  }
                                                                  temp=temp->next;
                                                                  }
                                                                  }
                         void delet(node *p)
                         {
                                   node *temp;
                                   temp=head;
                                   while(temp!=NULL)
                                   {
                                                    if(
                                                     
                                                                  
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              
                              void delet(int num)
                              {
                                   int
                              
                                      
