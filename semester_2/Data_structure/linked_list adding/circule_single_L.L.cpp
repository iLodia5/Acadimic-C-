#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

int main()
{
    // read the number of the nodes
    int n,counter = 1;
    cout << "Enter the numebr of the node: ";
    cin >> n;
    system("cls");
    cout << "Input (" << n << ") Nodes :\n"; 
    // read the linked list
    node *start = 0, *p, *last; // read the beginning point and the between them point and the last point
    for (int i = 0; i < n; i++) // loop depend on (n)
    {
        p = new node; // make new node
        cout << "Enter the data of Node ("<<counter++<<"): ";
        cin >> p->data;
        if (start == 0)
        {
            start = p;
            last = p;
            last->next = start; // to make circule
        }
        else
        {
            last->next = p;
            last = p;
            last->next = start;
        }
    }
    system("cls");
    cout << "Linked List conten (" <<n << ") of nodes :\n";
    counter = 1;
    p = start;
    do
    {
        cout <<"Node |"<<counter++<<"|data = "<< p->data << "|->";
        p = p->next;
    } while (p != start);
    

    return 0;
}