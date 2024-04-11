#include <iostream>
using namespace std;
const int sizee = 10;
struct Stack
{
    int array[sizee];
    int top = -1;
};
Stack ob;
void push()
{
    if (ob.top == sizee - 1)
    {
        cout << "stack is full " << endl;
    }
    else
    {
        int temp;
        cout << "Enter element to add : " << endl;
        cin >> temp;
        ob.top++;
        ob.array[ob.top] = temp;
    }
};
void pop()
{
    if (ob.top == -1)
    {
        cout << "Stack is empty!";
    }
    else
    {
        ob.top--;
    }
}
void print()
{
    if (ob.top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        for (int i = ob.top; i > 0; i--)
        {
            cout << "[" << i << "] = " << ob.array << endl;
        }
    }
}

int main()
{
    int choice;
    do
    {
        cout << "Enter your Choice : " << "\n\t1-push" << "\n\t2-pop" << "\n\t3-print" << "\n\t4-Exit" << endl;
        cout << "Enter Here : " ;
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            print();
            break;
            default : 
            cout << "you should enter a 1,2,3 or 4 to choose !!"<<endl;
            break;
        }
    } while (choice != 4);

    return 0;
}