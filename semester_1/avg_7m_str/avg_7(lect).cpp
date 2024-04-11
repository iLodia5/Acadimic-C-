#include <iostream>
using namespace std ;

struct Student
{
    string name ;
    int marks[7];

};

int main()
{
    Student joudy;
    float avg=0.0;
    int sum =0;
    int pass = 50;
    int sujpass = 0;
    int sujfailed = 0;
    cout << "Enter your name  : " <<endl;
    cin>> joudy.name;
    for(int i=0; i<7; i++)
    {
        cout <<"Enter the mark : " <<endl;
        cin>>joudy.marks[i];
        sum +=joudy.marks[i];
    }
    avg= sum/7.0;
    cout << "the avg of the student " << joudy.name << " is " << avg <<endl;

    for(int i=0; i<7; i++)
    {
        if(joudy.marks[i]>=pass)
        {
            sujpass++;
        }
        else
        {
            sujfailed++;
        }
    }
    cout<<"your failed in " << sujfailed << " subjects " <<endl;
    cout << "your pass in " << sujpass <<" subjects " <<endl;
    if(avg >= pass&&sujpass==0)//(sujpass==0)
    {
        cout << " you pass the stage " <<endl;
    }
    else
    {
        cout << " you faild " <<endl;
    }

}

