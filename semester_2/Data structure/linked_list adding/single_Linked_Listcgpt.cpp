#include <iostream>
using namespace std;

// Node structure to represent a linked list node
struct Node {
    int data;        // Data stored in the node
    Node *next;      // Pointer to the next node in the linked list
};

// Head pointer to the linked list, initially set to nullptr
Node *head = nullptr;

// Function prototypes
void print(Node *start);
void addBegin(Node *&start);
void addPos(Node *&start);
void addEnd(Node *&start);
void delBegin(Node *&start);
void delPos(Node *&start);
void delEnd(Node *&start);

int main() {
    int choice;

    // Menu-driven loop for linked list operations
    do {
         // Clear screen
        cout << "\nLinked List Menu:\n";
        cout << "1. Print Linked List\n";
        cout << "2. Add Node at the Beginning\n";
        cout << "3. Add Node at a Specific Position\n";
        cout << "4. Add Node at the End\n";
        cout << "5. Delete Node at the Beginning\n";
        cout << "6. Delete Node at a Specific Position\n";
        cout << "7. Delete Node at the End\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Switch statement for menu options
        switch (choice) {
            case 1:
                cout << "Linked List: ";
                print(head);
                break;

            case 2:
                addBegin(head);
                cout << "Node added at the beginning.\n";
                break;

            case 3:
                addPos(head);
                cout << "Node added at a specific position.\n";
                break;

            case 4:
                addEnd(head);
                cout << "Node added at the end.\n";
                break;

            case 5:
                delBegin(head);
                cout << "Node deleted at the beginning.\n";
                break;

            case 6:
                delPos(head);
                cout << "Node deleted at a specific position.\n";
                break;

            case 7:
                delEnd(head);
                cout << "Node deleted at the end.\n";
                break;

            case 8:
                cout << "Exiting the program.\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 8);

    return 0;
}

// Function to print the linked list
void print(Node *start) {
    // Check if the linked list is empty
    if (start == nullptr) {
        cout << "S.L.L is empty" << endl;
    } else {
        Node *current = start;
        // Traverse and print each node's data
        while (current != nullptr) {
            cout << "|" << current->data << "|";
            if (current->next != nullptr) {
                cout << " -> ";
            }
            current = current->next;
        }
        cout << endl;
    }
}

// Function to add a node at the beginning of the linked list
void addBegin(Node *&start) {
    cout << endl;
    Node *newNode = new Node;
    cout << "Enter the data for the new node: ";
    cin >> newNode->data;
    newNode->next = nullptr;

    // Check if the linked list is empty
    if (start == nullptr) {
        start = newNode;
    } else {
        newNode->next = start;
        start = newNode;
    }
}

// Function to add a node at a specific position in the linked list
void addPos(Node *&start) {
    cout << endl;
    int position;
    cout << "Enter the position to add a new node: ";
    cin >> position;

    // Check if the position is valid
    if (position < 1) {
        cout << "Invalid position." << endl;
        return;
    }

    Node *newNode = new Node;
    cout << "Enter the data for the new node: ";
    cin >> newNode->data;
    newNode->next = nullptr;

    // Add node at the beginning if the position is 1
    if (position == 1) {
        newNode->next = start;
        start = newNode;
        return;
    }

    Node *current = start;
    // Traverse to the node before the specified position
    for (int i = 1; i < position - 1 && current != nullptr; i++) {
        current = current->next;
    }

    // Check if the position is valid
    if (current == nullptr) {
        cout << "Invalid position." << endl;
        delete newNode;
        return;
    }

    // Insert the new node at the specified position
    newNode->next = current->next;
    current->next = newNode;
}

// Function to add a node at the end of the linked list
void addEnd(Node *&start) {
    cout << endl;
    Node *newNode = new Node;
    cout << "Enter the data for the new node: ";
    cin >> newNode->data;
    newNode->next = nullptr;

    // Check if the linked list is empty
    if (start == nullptr) {
        start = newNode;
        return;
    }

    Node *current = start;
    // Traverse to the last node
    while (current->next != nullptr) {
        current = current->next;
    }

    // Add the new node at the end
    current->next = newNode;
}

// Function to delete a node at the beginning of the linked list
void delBegin(Node *&start) {
    cout << endl;
    // Check if the linked list is empty
    if (start == nullptr) {
        cout << "Linked list is empty. Nothing to delete." << endl;
        return;
    }

    // Delete the first node and update the head pointer
    Node *temp = start;
    start = start->next;
    delete temp;
}

// Function to delete a node at a specific position in the linked list
void delPos(Node *&start) {
    cout << endl;
    int position;
    cout << "Enter the position to delete a node: ";
    cin >> position;

    // Check if the position is valid or the linked list is empty
    if (position < 1 || start == nullptr) {
        cout << "Invalid position or linked list is empty." << endl;
        return;
    }

    // Delete the first node if the position is 1
    if (position == 1) {
        Node *temp = start;
        start = start->next;
        delete temp;
        return;
    }

    Node *current = start;
    Node *prev = nullptr;
    // Traverse to the node at the specified position
    for (int i = 1; i < position && current != nullptr; i++) {
        prev = current;
        current = current->next;
    }

    // Check if the position is valid
    if (current == nullptr) {
        cout << "Invalid position." << endl;
        return;
    }

    // Delete the node at the specified position
    prev->next = current->next;
    delete current;
}

// Function to delete the last node in the linked list
void delEnd(Node *&start) {
    cout << endl;
    // Check if the linked list is empty
    if (start == nullptr) {
        cout << "Linked list is empty. Nothing to delete." << endl;
        return;
    }

    // Delete the first node if there is only one node
    if (start->next == nullptr) {
        delete start;
        start = nullptr;
        return;
    }

    Node *current = start;
    Node *prev = nullptr;
    // Traverse to the last node
    while (current->next != nullptr) {
        prev = current;
        current = current->next;
    }

    // Delete the last node
    prev->next = nullptr;
    delete current;
}
