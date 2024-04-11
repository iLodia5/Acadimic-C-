#include <iostream>
using namespace std;
struct node // step(1): intializing the node as struct.
{
    int data;
    node *next;
};
node *start = 0, *p, *temp;
void print(node *start);    // Display singly L.L
void addbegin(node *start); // Adding a node at beginning of S.L.L
void addpos(node *start);   // Adding a node at any position of S.L.L
void addend(node *start);   // Adding a node at end of S.L.L
void delbegin(node *start); // Deleting a node at beginning of S.L.L
void delpos(node *start);   // Deleting a node at any position of S.L.L
void delend(node *start);   // Deletnig a node at end of S.L.L

int main() // step(2): Create and read the linked list at main funtion
{
    int n; // number of nodes
    cout << "Enter The number of nodes : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        p = new node;
        cout << "Enter the data : ";
        cin >> p->data;
        p->next = NULL;
        if (start == NULL) // for the first node if the linked list have no nodes
        {
            start = p;
            temp = p; // first node
        }
        else
        {
            temp->next = p; // temp->next = address of next node = p
            temp = p;       // f.n = 1 , start->data,temp->data = value of p , start->next,temp->next = add of p : f.n = 2 , temp->next = p
        }
    }
    print(&start);
    addbegin(&start);
    print(&start);

    return 0;
}
void print(node **start)//print linked list
{
    if (*start == NULL)
    {
        cout << "S.L.L is empty" << endl;
    }
    else
    {
        node *i = *start;
        while (i != NULL)
        {
            if (i->next != NULL)
            {
                cout << "|" << i->data << "| -> ";
                i = i->next;
            }
            else
            {
                cout << "|" << i->data << "|";
                i = i->next;
            }
        }
    }
}

void addbegin(node **start)
{
    cout <<endl;
    p = new node;
    cout << "Enter the data for new node : " ;
    cin>>p->data;
    p->next = NULL;
    if(*start == NULL)
    {
        *start = p;
    }
    else
    {
        p->next = *start;
        *start = p;
    }

}