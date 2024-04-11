#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Pop and print elements from the stack
    while (!myStack.empty()) {
        cout << "Popped: " << myStack.top() <<endl;
        myStack.pop();
    }

    return 0;
}
