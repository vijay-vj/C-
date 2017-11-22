#include "swap of ll.h"
using namespace std;
int main()
{
    int x,req,data;
    node *p;
    LinkedList l;
    cout<<"how many numbers do u want:";
    cin>>req;
    for(int i=0;i<req;i++)
    {
            cin>>data;
            l.insert(data);
            }
            l.swap();
            system ("pause");
            return 0;
}
    
