#include <iostream>
using namespace std;

int main()
{
    string userInput = "";
    int checkPoint = 0;

    cout << "Enter a value: " << endl;
    
    while (true)
    {
        cin >> userInput;
        cout << "userInput = " << userInput;

        if (userInput == "000")
        {
            checkPoint += 3;
            cout << "Three zero ";
            break;
        }
        else if (userInput == "00")
        {
            checkPoint += 2;
            cout << "Two zero ";
        }
        else if (userInput == "0")
        {
            checkPoint++;
            cout << "One zero ";
        }
        
        if (checkPoint >= 3)
        {
            break;
        }
        
        cout << endl << "Check point = " << checkPoint << endl;
    }
    
    return 0;
}
