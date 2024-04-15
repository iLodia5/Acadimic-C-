#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void print(node *start);
void addbegin(node *&start);
void addpos(node *&start);
void addend(node *&start);
void delbegin(node *&start);
void delpos(node *&start);
void delend(node *&start);
int main()
{
    int n;
    cout << "Enter the number of nodes : ";
    cin >> n;
    node *start = 0, *p, *temp;
    for (int i = 0; i < n; i++)
    {
        p = new node;
        cout << "Enter the data for node (" << i + 1 << "): ";
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
    

    return 0;
}
void print(node *start)
{
    cout << endl;
    if (start == 0)
    {
        cout << "S.L.L is empty!" << endl;
    }
    else
    {
        node *i = start;
        while (i != 0)
        {
            cout << i->data << " ";
            i = i->next;
        }
    }
}
void addbegin(node *&start)
{
    cout << endl;
    node *p = new node;
    cout << "Enter data: ";
    cin >> p->data;
    p->next = 0;
    if (start == 0)
    {
        start = p;
    }
    else
    {
        p->next = start;
        start = p;
    }
}
void addpos(node *&start)
{
    cout << endl;
    int pos;
    node *p = new node, *r;
    cout << "Enter data to add at any position : ";
    cin >> p->data;
    cout << "Enter the position : ";
    cin >> pos;
    p->next = 0;
    r = start;
    for (int i = 1; i < pos - 1; i++)
    {
        r = r->next;
    }
    p->next = r->next;
    r->next = p;
}
void addend(node *&start)
{
    cout << endl;
    node *p = new node, *r;
    cout << "Enter the data to add at end : ";
    cin >> p->data;
    p->next = 0;
    if (start == 0)
    {
        start = p;
    }
    else
    {
        r = start;
        while (r->next != 0)
        {
            r = r->next;
        }
        r->next = p;
    }
}
void delbegin(node *&start)
{
    cout << endl;
    if (start == 0)
    {
        cout << "S.L.L is empty!" << endl;
    }
    else
    {
        node *p = start;
        start = start->next;
        delete p;
    }
}
void delpos(node *&start)
{
    cout << endl;
    int pos;
    cout << "Enter the position to delete : ";
    cin >> pos;
    node *r = start, *p;
    for (int i = 1; i < pos; i++)
    {
        p = r;       // pos-1
        r = r->next; // pos
    }
    p->next = r->next;
    delete r;
}
void delend(node *&start)
{
    if (start == 0)
    {
        cout << "S.L.L is empty!" << endl;
    }
    else
    {
        node *p = start, *r;
        while (p->next != 0)
        {
            r = p;
            p = p->next;
        }
        if(p==start)
        {
            start = 0;
            delete p;
        }
        else
        {
            r->next = 0;
            delete p;
        }
    }
}
