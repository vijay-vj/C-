#include<iostream>
using namespace std;
class btree 
{
      private:
              struct btreenode
              {
                     btreenode *lc;
                     int data;
                     btreenode *rc;
                     } *root;
      public:
             btree();
             void buildtree(int num);
             void insert(btreenode *sr,int num);
             void traverse();
             void inorder(btreenode *sr);
             void postorder(btreenode *sr);
             void preorder(btreenode *sr);
             void del(btreenode *sr);
             ~btree();
             };
           btree::btree()
           {
                            root=NULL;
                            }
                            void btree::buildtree(int num)
                            {
                                 insert(root,num);
                                 }
                                 void btree::insert(btreenode *sr,int num)
                                 {
                                      if(*sr==NULL)
                                      {
                                                    
                                                    *sr=new btreenode;
                                                   (*sr)->lc=NULL;
                                                   (*sr)->data=num;
                                                   (*sr)->rc=NULL;
                                                   return; 
                                                   }
                     else
                     {
                         if(num<(sr)->data)
                         {
                                            insert((*sr)->lc,num);
                                            }
                                            else
                                            {
                                                insert((*sr)->rc,num);
                                                }
                                                }
                                                }
                                void btree::traverse()
                                {
                                     cout<<"\ninorder traverse:";
                                     inorder(root);
                                     cout<<"\npreorder traverse:";
                                     preorder(root);
                                     cout<<"\npostorder traverse:";
                                     postorder(root);
                                                     }
                                  void btree::inorder(btreenode *sr)
                                  {
                                       if(sr!=NULL)
                                       {
                                                   inorder(sr->lc);
                                                   cout<<" "<<sr->data;
                                                   inorder(sr->rc);
                                                   }
                                                   else
                                                   return;
                                                   }
                                   void btree::preorder(btreenode *sr)
                                  {
                                       if(sr!=NULL)
                                       {           
                                                    cout<<" "<<sr->data;
                                                   preorder(sr->lc);
                                                   preorder(sr->rc);
                                                   }
                                                   else
                                                   return;
                                                   }
                                            void btree::postorder(btreenode *sr)
                                  {
                                       if(sr!=NULL)
                                       {
                                                   postorder(sr->lc);
                                                   postorder(sr->rc);
                                                   cout<<" "<<sr->data;
                                                   }
                                                   else
                                                   return;
                                                   }     
                                                     void btree::del(btreenode *sr)
                                                        {
                                                             if(sr!=NULL)
                                                             {
                                                                         del(sr->lc);
                                                                         del(sr->rc);
                                                                         }
                                                                         delete sr;
                                                                         }                            
                                         btree::~btree()
                                         {
                                                        del(root);
                                                        }
                                                                         int main()
                                                                         {
                                                                              btree bt;
                                                                              int req,i=1,num;
                                                                              cout<<"how many numbers do u want:";
                                                                              cin>>req;
                                                                              while(i++<=req)
                                                                              {
                                                                                             cout<<"entre the data:";
                                                                                             cin>>num;
                                                                                             bt.buildtree(num);
                                                                                             }
                                                                                             bt.traverse();
                                                                                             system ("pause");
                                                                                             return 0;
                                                                                             }                                          
