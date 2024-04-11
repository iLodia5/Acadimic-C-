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

    cout << "Enter the number of students: " << endl;
    int Numofstudent;
    cin >> Numofstudent;

    Student Cs[Numofstudent];
    string failer_name_1[Numofstudent];
    string failer_name_2[Numofstudent];
    int checkfail_2 = 0;
    float avg[Numofstudent];
    float sum = 0;
    int temp;
    string Nameglass = "";

    // Input all elements
    for (int i = 0; i < Numofstudent; i++)
    {
        cout << "Enter the name of student " << i + 1 << ": " << endl;
        cin >> Cs[i].name;
        for (int j = 0; j < 7; j++)
        {
            cout << "Enter the Object " << NumberofObjects++ << " : " << endl;
            cin >> Cs[i].marks[j];
        }
        NumberofObjects = 1;
    }

    // Student with one fail subject
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

    // Student with two fail subjects
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

    // Calculate average
    for (int i = 0; i < Numofstudent; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            sum += Cs[i].marks[j];
        }
        avg[i] = sum / 7.0;
        sum = 0;
    }

    // Sorting
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

    // Add to pass
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

    // Check if they need only 5 additional marks and display the updated marks
    for (int i = 0; i < Numofstudent; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (remindingmarks <= additionalmarks)
            {
                Cs[i].marks[j] += remindingmarks;
                remindingmarks = 0;
            }
        }
    }

    // Display the final marks and inform the user if the student has failed
    cout << "Updated marks:" << endl;
    for (int i = 0; i < Numofstudent; i++)
    {
        cout << "Student: " << Cs[i].name << endl;
        bool hasFailed = false; // Check if the student has failed
        for (int j = 0; j < 7; j++)
        {
            cout << "Subject " << j + 1 << ": " << Cs[i].marks[j] << endl;
            if (Cs[i].marks[j] < 50)
            {
                hasFailed = true;
            }
        }
        if (hasFailed)
        {
            cout << "The student has failed." << endl;
        }
        else
        {
            cout << "The student has passed." << endl;
        }
    }

    return 0;
}
