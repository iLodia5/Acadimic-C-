#include <iostream>
using namespace std;

int main()
{
    string userInput = "";
    int checkPoint = 0;
    cout << " Enter a value : " << endl;
    while (checkPoint <3)
    {
        
        cin >> userInput;
        cout <<"userInput = " <<userInput;
        if (userInput == "000")
        {
            checkPoint +=3;
            cout  << "Three zero ";
            break;
            
        }
        if (userInput == "0")
            {checkPoint++;
            cout << "one zero ";}
        if (userInput != "0")
            checkPoint = 0;
        
        cout <<endl<<"check point = " << checkPoint << endl;
    }
    return 0;
}