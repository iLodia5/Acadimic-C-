#include <iostream>
using namespace std;

int checkpass(string pass)
{
    string mainpass[3] = {"pass1234", "hello", "joudy"};

    cout << "Please enter the password: " << endl;

    for (int i = 0; i < 3; i++)
    {
        cin >> pass;
        for (int j = 0; j < 3; j++)
        {
            if (mainpass[j] == pass)
            {
                return j + 1; // Return the user number (1-based index)
            }
        }
    }
    return 0; // Return 0 if login fails
}

int main()
{
    string passwordmain;
    int userNumber = checkpass(passwordmain);

    if (userNumber > 0)
    {
        cout << "Welcome User " << userNumber << ": " << passwordmain << endl;
    }
    else
    {
        cout << "You have no other chance" << endl;
    }

    return 0;
}
