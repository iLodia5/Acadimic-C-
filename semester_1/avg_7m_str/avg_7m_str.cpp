#include<iostream>
using namespace std;
struct Student
{
    
    int marks[7];
};




int main()
{
    Student students;
    int numofstudnet=0;
    
    string subjects[6] = {"organic","physical","industireal","inorgainc","differential equation","analytical"};
    
    cout << "Enter the number of students : " <<endl;
    cin >> numofstudnet;
    string names[numofstudnet];
    int sum [numofstudnet] = {0,0,0,0,0,0};
    double avg[numofstudnet] = {0.0,0.0,0.0,0.0,0.0,0.0};
    for(int i=0; i<numofstudnet; i++)
    {
        cout << "Enter the name of student  "<< i <<" : " <<endl;
        cin >> names[i];
        for(int j=0; j<6; j++)
        {
            cout << "Enter the mark of " << subjects[j] << " : " ;
            cin>> students.marks[j];
            sum[i] += students.marks[j];



        }
        avg[i] = sum[i]/6;
        cout << "the averge of the student " << names[i] << " is  : " << avg[i] <<endl;
    }

    return 0;
}