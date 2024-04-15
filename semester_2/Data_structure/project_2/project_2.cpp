#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

int main()
{
    node *p, *start, *R;
    p = new node; // create first node;
    R = new node; // create second node
    cout << "Enter the value of R : ";
    cin >> R->data; // Enter the value of (data) at first node
    cout << "Enter the value of R : ";

    cin >> p->data;
    p->next = NULL; // store the pointer value of the next node
    // note : cuse we don't have a next node so the value of the next it will be Null or zero
    start = R;                                              // make a start point that point to the first node or the start node
    R->next = p;
    cout << "the value of R = " << R->data << endl;         // output = 8
    cout << "The value of Start = " << start->data << endl; // output = 8
    cout << "The value of P = " << p->data; // output = 5

    // New part to convert the start point .

    return 0;
}
