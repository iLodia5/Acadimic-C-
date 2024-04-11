#include <iostream>
using namespace std;

bool checkpass(string pass,int& userNumber)
{
    int attempts = 0;
    string mainpass[3] = {"pass1234", "hello", "joudy"};
    cout << "please enter the password " << endl;

    for (int i = 0; i < 3; i++)
    {
        cin >> pass;
        for (int j = 0; j < 3; j++)
        {
            if (mainpass[j] == pass)
            {
                userNumber = j + 1;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    string passwordmain;
    int userNumber = 0;
    if (checkpass(passwordmain,userNumber))
    {
        cout << "welcome User " << userNumber;
    }

    else
    {
        cout << "you have no other chance" << endl;
    }

    return 0;
}