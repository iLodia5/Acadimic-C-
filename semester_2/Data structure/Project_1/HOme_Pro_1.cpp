#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
//this code for doing manually and with your hand inside the code not with the user
int main()
{
    Node *p,*R,*start;
    p = new Node;
    start = p;
    p->next = NULL;                     
    cout << "Enter p : " ;
    cin>> p->data;
    R = new Node;
    p->next = R;
    R->next = NULL;
    cout << "Enter R : ";
    cin>> R->data;
    cout << "P = " << p->data << endl
         << "R = " <<R->data << endl;


    //look at HOME_Pro_2.cpp
    return 0;
}