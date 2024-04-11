#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node next;
};
Node *start, *p;
int main()
{
    int n;
    cout << "Enter the Number of the Nodes : " ;
    cin>> n;
    for(int i=0; i<=n; i++)
    {
        p = new Node;
        cout << "Enter P(" << i+1 << ") : ";
        cin>> p->data;
        p->next = 0;
        if(start == 0)
        {
            start = p;
            temp = p;
        }
        else 
        {
            temp->next = p;
            p = temp;
        }
    }
    for(int *temp =start; temp != 0; temp = temp->next)//print L.L
    {
        cout << " temp " << " = " << temp->data << endl;
    }
    
    return 0;
}