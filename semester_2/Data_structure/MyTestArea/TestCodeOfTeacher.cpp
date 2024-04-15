#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
void print(node *start);
int main()
{
    node *start = 0, *p, *temp;//diff(1)
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        p = new node;
        cout << "Enter data:";
        cin >> p->data;
        p->next = 0;
        if (start == 0)
        {
            start = p;
            temp = p;
        }
        else
        {
            temp->next = p;
            temp = p;
        }
    }
    
    print(start);

    return 0;
}
void print(node *start)
{
    if(start == 0)
    {
        cout << "S.L.L is empty" << endl;
    }
    else
    {
        node *i = start;
        while (i != 0)
        {
            cout << i->data<<" ";
            i=i->next;
        }
    }
}