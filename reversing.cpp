#include<iostream>
using namespace std;
class linkedlist
{
      struct node
      {
             int val;
             node *next;
             }*p;
             public:
                    linkedlist();
                    void add(int num);
                    void display();
                    void reverse();
                    ~linkedlist();
                    };
                    linkedlist::linkedlist()
                    {
                    p=NULL;
                    }
                    void linkedlist::add(int num)
                    {
                         node *temp;
                         temp=new node;
                         temp->val=num;
                         temp->next=NULL;
                         p=NULL;
                         }
                    void linkedlist::reverse()
                    { 
                         node *q,*r,*s;
                         q=p;
                         r=NULL;
                    while(q!=NULL)
                    {
                         s=r;
                         r=q;
                         q=q->next;
                         r->next=s;
                         }
                         p=r;
                         }
                         void linkedlist::display()
                         {
                              node *temp;
                              temp=head;
                              while(temp!=NULL)
                              {
                                               cout<<temp->val<<" ";
                                               temp=temp->next;
                                               }
                                               }
                linkedlist::~linkedlist()
                {
                                         node *q;
                                         while(p!=NULL)
                                         {
                                                       q=p->next;
                                                       delete p;
                                                       p=q;
                                                       }
                                                       }
                                                       int main()
                                                       {
                                                            linkedlist ll;
                                                            int req,x;
                                                            cout<<"enter the number of req elements:";
                                                            cin>>req;
                                                            for(int i=0;i<req;i++)
                                                            {
                                                                    cout<<"enter numbers:";
                                                                    cin>>x;
                                                                    ll.add(x);
                                                                    }
                                                                    cout<<"elements in linkedlist r :";
                                                                    ll.display();
                                                                    ll.reverse();
                                                                    cout<<"after reversing:";
                                                                    ll.display();
                                                                    system ("pause");
                                                                    return 0;
                                                                    }
