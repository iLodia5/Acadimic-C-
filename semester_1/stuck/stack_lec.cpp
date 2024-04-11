#include <iostream>
using namespace std;
    const int sizee = 4;
    

struct Stack
{
    int a[sizee];
    int top = -1;
};

Stack ob;

void push()
{
    if (ob.top == sizee - 1)
    {
        cout << "stack is full" << endl;
        
    }
    else  
    {
        cout << "Give element to add to the array" <<endl;
        int item;
        cin >> item;
        ob.top++;
        ob.a[ob.top] = item;
    }
}
void pop()
{
    if(ob.top==-1)
    {
        cout << "stack are empty" <<endl;
    }
    else
    {
        ob.top--;
    }
}
void print()
{
    if(ob.top==-1)
    {
        cout << "stack are empty" <<endl;
    }
    else
    {
        for(int i=ob.top;i>=0;i--)
        {
            cout << "a[" <<i+1<<"] = " <<ob.a[i]<<endl;
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
        default:
            cout << "you should Enter your choice as number form 1 to 4 :)" <<endl;
            break;
        }
    } while (choice != 4);

    return 0;
}


