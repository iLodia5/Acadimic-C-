#include <iostream>
using namespace std;
struct Student
{
    string name;
    int marks[7];
};

int main()
{
    int NumberofObjects = 1;
    double additionalmarks = 5;
    double remindingmarks = 0;

    cout << "Enter the number of the students : " << endl;
    // Enter the NUmber of student
    int Numofstudent;
    cin >> Numofstudent;
    // make an array of object
    Student Cs[Numofstudent];
    string failer_name_1[Numofstudent];
    string failer_name_2[Numofstudent];
    int checkfail_2 = 0;
    float avg[Numofstudent];
    float sum = 0;
    int temp;
    string Nameglass = "";

    // input all element

    for (int i = 0; i < Numofstudent; i++)
    {
        cout << "Enter the name of the student : " << endl;
        cin >> Cs[i].name;
        for (int j = 0; j < 7; j++)
        {
            cout << "Enter the Object " << NumberofObjects++ << " : " << endl;

            cin >> Cs[i].marks[j];
        }
        NumberofObjects = 1;
    }
    // studnet with one fail subject
    for (int i = 0; i < Numofstudent; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (Cs[i].marks[j] < 50)
            {
                failer_name_1[i] = Cs[i].name;
                break;
            }
        }
    }
    // student with two fail subject
    for (int i = 0; i < Numofstudent; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (Cs[i].marks[j] < 50)
            {
                checkfail_2++;
                if (checkfail_2 == 2)
                {
                    failer_name_2[i] = Cs[i].name;
                    break;
                }
            }
        }
    }
    // avearge
    for (int i = 0; i < Numofstudent; i++)
    {

        for (int j = 0; j < 7; j++)
        {
            sum += Cs[i].marks[j];
        }
        avg[i] = sum / 7.0;
        sum = 0;
    }
    // sorting
    for (int i = 0; i < Numofstudent; i++)
    {
        for (int j = i + 1; j < Numofstudent; j++)
        {
            if (avg[i] < avg[j])
            {
                temp = avg[j];
                avg[j] = avg[i];
                avg[i] = temp;

                string tempname = Cs[j].name;
                Cs[j].name = Cs[i].name;
                Cs[i].name = tempname;
            }
        }
    }
    // add to pass
    for (int i = 0; i < Numofstudent; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (Cs[i].marks[j] < 50)
            {
                double neededMarks = 50 - Cs[i].marks[j];
                if (neededMarks <= additionalmarks)
                {
                    additionalmarks -= neededMarks;
                    Cs[i].marks[j] += neededMarks;
                }
                else
                {
                    remindingmarks += neededMarks;
                }
            }
        }
    }
    // check if the need only 5
    for(int i=0; i<Numofstudent; i++)
    {
        for(int j=0; j<7; j++)
        {
            if (remindingmarks <= additionalmarks)
            {
                cout << "Subject " << i + 1 << ": " << Cs[i].marks[j] << endl;
            }
            
        }
    }

    return 0;
}