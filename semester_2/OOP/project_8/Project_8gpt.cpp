#include <iostream>
#include <string>
using namespace std;

class Student_A
{
private:
    //defining the variables of group A
    string name_a[5];
    int id_a[5];

public:
    Student_A(string n[5], int I[5])//constractor with two parameters that take the value and give it to the ((private variables))
    {
        for (int i = 0; i < 5; i++)
        {
            name_a[i] = n[i];
            id_a[i] = I[i];
        }
    }

    bool searchStudent(const string &searchName) const
    {
        for (int i = 0; i < 5; i++)
        {
            if (name_a[i] == searchName)
            {
                cout << searchName << " found in Group A with ID: " << id_a[i] << endl;
                return true;
            }
        }
        return false;
    }
};

class Student_B
{
private:
    string name_b[5];
    int id_b[5];

public:
    Student_B(string n[5], int I[5], const Student_A &A);

    bool searchStudent(const string &searchName) const
    {
        for (int i = 0; i < 5; i++)
        {
            if (name_b[i] == searchName)
            {
                cout << searchName << " found in Group B with ID: " << id_b[i] << endl;
                return true;
            }
        }
        return false;
    }
};

Student_B::Student_B(string n[5], int I[5], const Student_A &AA)
{
    for (int i = 0; i < 5; i++)
    {
        name_b[i] = n[i];
        id_b[i] = I[i];
    }

    cout << "Enter a student name to search: ";
    string searchName;
    cin >> searchName;

    if (!AA.searchStudent(searchName) && !searchStudent(searchName))
    {
        cout << searchName << " not found in either group." << endl;
    }
}

int main()
{
    string name_A[5] = {"ahmed", "mhmd", "azad", "hassan", "znar"};
    int ID_A[5] = {123, 124, 125, 126, 127};
    string name_B[5] = {"znar", "joudy", "yousef", "dilshad", "moon"};
    int ID_B[5] = {127, 129, 120, 121, 122};

    Student_A A(name_A, ID_A);
    Student_B B(name_B, ID_B, A);

    return 0;
}
