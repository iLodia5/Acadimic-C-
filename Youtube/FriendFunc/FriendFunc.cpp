#include <iostream>
#include <windows.h>
using namespace std;
class person
{
private:
    string name;
    int age;
    string gender;

public:
    person(string na, int ag, string ge) : name(na), age(ag), gender(ge)
    {
        if (gender == "Female" || gender == "female" || gender == "F" || gender == "f" || gender == "Male" || gender == "male" || gender == "M" || gender == "m")
        {
            if (gender == "female" || gender == "F" || gender == "f" || gender == "male" || gender == "M" || gender == "m")
            {
                if (gender == "female" || gender == "F" || gender == "f")
                {
                    gender = "Female";
                }
                else
                {
                    gender = "Male";
                }
            }
        }
    }
    void set()
    {
        system("cls");
        cout << "Name = ";
        cin >> name;
        cout << "Age = ";
        cin >> age;
        for (int i = 0; i < 10; i--)
        {

            cout << "male(Female(f)/male(m)) = "; // condition to user not enter something casual
            cin >> gender;
            if (gender == "Female" || gender == "female" || gender == "F" || gender == "f" || gender == "Male" || gender == "male" || gender == "M" || gender == "m")
            {
                if (gender == "female" || gender == "F" || gender == "f" || gender == "male" || gender == "M" || gender == "m")
                {
                    if (gender == "female" || gender == "F" || gender == "f")
                    {
                        gender = "Female";
                        break;
                    }
                    else
                    {
                        gender = "Male";
                        break;
                    }
                }
            }
            else
            {
                system("cls");
                cout << "Try to Enter like it suggest it at first ";
            }
        }
    }
    void get()
    {
        system("cls");
        cout << "This is get function : " <<endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
    }
    friend void print(person obj);
};
void print(person p)
{
    system("cls");
    cout << "This is print function : " <<endl;
    cout << "Name: " << p.name << endl;
    cout << "Gender: " << p.gender << endl;
    cout << "Age: " << p.age << endl;
}

int main()
{
    person p("Ali", 22, "F");
    p.get();
    p.set();
    p.get();
    print(p);//friend function

    return 0;
}