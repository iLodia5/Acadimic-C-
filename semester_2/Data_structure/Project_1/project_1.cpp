/*Write a C++ program to create a linked list with two nodes.
Prompt the user to enter values for the first and second nodes, then display the values.
Also, output the sum of the values of the first and second nodes using a start pointer.*/

#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

int main()
{
    node *p,*start,*R;
    p= new node; //create first node;
    cout << "Enter the value of P : " ;
    cin>>p->data;//Enter the value of (data) at first node
    p->next = NULL; //store the pointer value of the next node
    //note : cuse we don't have a next node so the value of the next it will be Null or zero

    start = p;//make a start point that point to the first node or the start node
    cout <<"the value of p = "<< p->data << endl;// output = 5
    cout << "The value of Start = " <<start->data<< endl;// output = 5

    R = new node;//create second node
    cout << "Enter the value of R : " ;

    cin>>R->data;
    R->next = NULL;
    p->next = R;
    cout << "The value of R = " << R->data;
    
    //New part to convert the start point .

    return 0;
}
