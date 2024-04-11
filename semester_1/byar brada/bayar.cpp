#include <iostream>

using namespace std;
class student
{
private:
    int id, m[5];
    string name;

public:
    void setid()
    {
        cout << "enter the id for student : ";
        cin >> id;
        cout << "enter name student  : ";
        cin >> name;
        int sum = 0;
        float avr = 0.0;
        for (int i = 0; i < 5; i++)
        {
            cout << "enter mark " << i + 1 << " : ";
            cin >> m[i];
            cout << endl;
            sum += m[i];
        }
        avr = sum / 5;
        if (avr >= 50)
        {
            cout << "the average is : " << avr << "the student is pass ";
        }
        else
        {
            cout << "the average is : " << avr << "the student is fail ";
        }
        cout << "********************************************";
    }

    int getid()
    {
        return id;
    }
    void print()
    {
        cout << "the name is : " << name;
    }
};
int main()
{
    int n;
    cout << "how many student you need to enter : ";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].setid();
    }
    int id;
    cout << "enter id student to print information : ";
    cin >> id;
    for (int i = 0; i < n; i++)
    {
        if (s[i].getid() == id)
        {
            s[i].print();
        }
    }
    return 0;
}