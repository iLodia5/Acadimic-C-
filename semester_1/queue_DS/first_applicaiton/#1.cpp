#include <iostream>
using namespace std;
const int siz = 10;
int q[siz];
int s[siz];
int top = -1;
int front = -1, back = -1;
void enqueue()
{

    if (front == -1 && back == -1)
    {
        front = 0;
        back = 0;
        cout << "Enter a element : " << endl;
        cin >> q[back];
    }
    else if (back == siz - 1)
    {
        cout << "queue is full" << endl;
    }
    else
    {

        back++;
        cin >> q[back];
    }
}
void dequeue()
{
    if (front == -1 && back == -1)
    {
        cout << "queue is empty" << endl;
    }
    else if (front == back)
    {
        top++;
        s[top] = q[front];
        front = -1;
        back = -1;
    }
    else
    {
        top++;
        s[top] = q[front];

        front++;
    }
}
void print()
{
    if (front == -1 && back == -1)
    {
        cout << "queue is empty " << endl;
    }
    else
    {
        for (int i = front; i <= back; i++)
        {
            cout << q[i] << " " << endl;
        }
    }
}
void printstack()
{
    if (top == -1)
    {
        cout << "stack are empty" << endl;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << "a[" << i + 1 << "] = " << s[i] << endl;
        }
    }
}
int main()
{
    int choice;
    do
    {
        cout << "\t1-enqueue" << endl
             << "\t2-dequeue" << endl
             << "\t3-print" << endl
             << "\t4-print stack" << endl
             << "\t 5-exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            print();
            break;
        case 4:
            printstack();
            break;

        default:
            cout << "You choose to goout of program" << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}