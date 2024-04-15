#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

int main()
{
    // read number of node
    int n, counter = 1;
    cout << "Enter the numebr of the nodes : ";
    cin >> n;
    system("cls");
    // read the linked list elements
    node *start = 0, *p, *last;
    for (int i = 0; i < n; i++)
    {
        p = new node;
        cout << "Enter the the data of Node " << counter++ << " : ";
        cin >> p->data;
        system("cls");
        if (start == 0)
        {
            start = p;
            last = p;
            last->next = start;
        }
        else
        {
            last->next = p;     // give the current node the address of the next node
            last = p;           // make <last> jump into next node (new node)
            last->next = start; // make the new node point to the first node in the linked list .
        }
    }
    p = start;
    do
    {

        cout << "| " << p->data << "|";
        if (p->next != start)
        {
            cout << "->";
        }
        p = p->next;

    } while (p != start);

    return 0;
}