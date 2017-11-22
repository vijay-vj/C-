#include<iostream>
using namespace std;
class DL
{
      private:
              struct node
              {
                     int val;
                     node *next;
                     node *prev;
                     } *head,*tail;
                     node *p,*t;
      public:
             DL();
             void insert(int data);
             void delet(int data);
             void display();
             };
             DL::DL()
             {
                  head=tail=NULL;
                            }
             void DL::delet(int data)
             {
                  if(head==NULL)
                  {
                                cout<<"list is empty";
                                }
                  else if(head->next==NULL && head->val==data)
                  {
                       cout<<" ";
                       cout<<"single node is deleted";
                                     }
                  else 
                  {  
                         p=head;
                         while(p!=NULL)
                         {
                         while(p->val=data)
                         {
                                           p=p->next;
                                           }
                                           t=p->next;
                                           p->next=p->prev;
                                           p->prev=t;
                                           }
                                           }
                                           }
             void DL::insert(int data)
             {  
             if(head==NULL)
             {             head=new node;
                           head->val=data;
                           head->next=NULL;
                           head->prev=NULL;
                           p=head;
                           tail=head;
                           }
                           else
                           {
                              node *temp;
                              temp=new node;
                              temp->val=data;
                              tail->next=temp;
                              temp->next=NULL;
                              temp->prev=tail;
                              tail=temp;   
                               }
                               }
                               void DL::display()
                               {
                                    node *p;
                                    p=head;
                                    while(p!=NULL)
                                    {
                                    cout<<p->val;
                                    p=p->next;
                                    }
                                    }
                                    int main()
                                    {   int req,data,num;
                                        DL l;
                                        cout<<"how manu numbers do u need:";
                                        cin>>req;
                                        cout<<"enter data:"; 
                                        for(int i=0;i<req;i++)
                                        {
                                                cin>>data;
                                                l.insert(data);
                                                }
                                                l.display();
                                                cout<<"enter a number to delete:";
                                                cin>>num;
                                                l.delet(num);
                                                l.display();
                                                system ("pause");
                                                return 0;
                                                }
                               
