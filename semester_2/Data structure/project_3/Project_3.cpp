#include<iostream>
using namespace std;
struct node 
{
    string name;
    int id;
    node *next;
};

int main()
{
    node *a,*b,*c;

    a = new node;
    cout << "Enter the name of a : ";
    cin>>a->name;
    cout << "Enter the id of a : ";
    cin>> a->id;
    a->next = NULL;
    b=a;
    c=a;
    cout << "a = " << a->id;
    cout << "b = " << b->id;
    cout << "c = " << c->id;



    
    return 0;
}