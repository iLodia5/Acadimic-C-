#include<iostream>
using namespace std;

struct Student
{
    string name;
    int mark;
    double fee;
   
};



int main()
{
    Student stud_arr[6];
    Student temp;
    stud_arr[0] = {"joudy",66,1000};
    stud_arr[1] = {"sipan" , 34, 1000};
    stud_arr[2] = {"osama ", 36,1000};
    stud_arr[3] = {"dilo",53,1000};
    stud_arr[4] = {"shyar",63,1000};
    stud_arr[5] = {"olyar",88,1000};

    //sorting the marks
    for(int i=0; i<6; i++)
    {
        for(int j = i+1; j<6; j++)
        {
            if(stud_arr[i].mark < stud_arr[j].mark)
            {
                temp = stud_arr[i];
                stud_arr[i] = stud_arr[j];
                stud_arr[j] = temp;
            }
        }
    }

    return 0;

}