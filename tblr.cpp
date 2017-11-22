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
             int count;
             int *a[];
             btree();
             void buildtree(int num);
             void insert(btreenode **sr,int num);
             void tblr(btreenode *sr);
             void traverse();
             void display();
             void inorder(btreenode *sr);
             void del(btreenode *sr);
             ~btree();
             };
           btree::btree()
           {
                            root=NULL;
                            }
                            void btree::buildtree(int num)
                            {
                                 insert(&root,num);
                                 }
                                 void btree::insert(btreenode **sr,int num)
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
                         if(num<(*sr)->data)
                         {
                                            insert(&((*sr)->lc),num);
                                            }
                                            else
                                            {
                                                insert(&((*sr)->rc),num);
                                                }
                                                }
                                                }
                                void btree::traverse()
                                {
                                     cout<<"\ninorder traverse:";
                                     inorder(root);
                                                     }
                                  void btree::inorder(btreenode *sr)
                                  { 
                                       if(sr!=NULL)
                                       {
                                                   inorder(sr->lc);
                                                   cout<<" "<<sr->data;
                                                   inorder(sr->rc);
                                                    count++;
                                                    }
                                                   else
                                                   return;
                                                   }
                                  void btree::tblr(btreenode **sr)
                                  {
                                       for(int i=1;i<count/2-1;i++)
                                       {
                                               while(*sr!=NULL)
                                               {
                                                              a[0]=*sr->data;
                                                              a[i]=((*sr)->lc)->data;
                                                              a[2i+1]=((a[i])->lc)->data;
                                                              a[2i+2]=((a[i])->rc)->data;
                                                              }
                                                              }
                                                              }
                                               void btree::display()
                                               {
                                                     for(int i=0;i<count/2-1;i++)
                                                                                             {
                                                                                                     cout<<a[i];
                                                                                                     cout<<endl;
                                                                                                     }
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
