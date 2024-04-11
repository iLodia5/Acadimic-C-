#include <iostream>
using namespace std;

int main() {
    int sale[] = { 75, 50, 25 };
    int marks[] = { 78, 80, 90, 60, 88, 92 };
    int fee[] = { 1000,1000,1000,1000,1000,1000 };
    string students[] = { "osama", "joudy", "shyar", "anas", "ahmad", "Ta3mmo" };
            //sorting 
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (marks[i] < marks[j]) {
                int tempMark = marks[i];
                marks[i] = marks[j];
                marks[j] = tempMark;

                string tempStudent = students[i];
                students[i] = students[j];
                students[j] = tempStudent;



            }
        }
    }
    //print and know the sort of tops
    for (int i = 0; i < 3; i++) {
        int number = i + 1;
            switch (number)
            {
            case 1:
                cout << students[i] << " got " << marks[i] << " marks" << " and is the " << i + 1 << " student pays 1000 " << endl;
                cout << "after paying the fee on sale" << fee[i] * (1 - 0.75) << endl;
                break;
            case 2:
                cout << students[i] << " got " << marks[i] << " marks" << " and is the " << i + 1 << " student pays 1000 " << endl;
                cout << "after paying the fee on sale" << fee[i] * (1 - 0.50) << endl;
                break;
            case 3:
                cout << students[i] << " got " << marks[i] << " marks" << " and is the " << i + 1 << " student pays 1000 " << endl;
                cout << "after paying the fee on sale" << fee[i] * (1 - 0.25) << endl;
                break;
            default:
                break;
            };
    }

    return 0;
}

