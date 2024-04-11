#include <iostream>
using namespace std;
class Student_A
{
private:
    string name_a[5];
    int id_a[5];

public:
    Student_A(string n[5], int I[5])
    {
        for (int i = 0; i < 5; i++)
        {
            name_a[i] = n[i];
            id_a[i] = I[i];
        }
    }
    
};
class Student_B
{
private:
    string name_b[5];
    int id_b[5];

public:
    Student_B(string n[5], int I[5],const Student_A& A);

    
    

};
    Student_B::Student_B(string n[5], int I[5],const Student_A& AA)
    {
        for (int i = 0; i < 5; i++)
        {
            name_b[i] = n[i];
            id_b[i] = I[i];

        }
        
        cout << "Searching for ---> " <<endl;
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
               AA.
            }
        }
    }
 int main()
{
    string name_A[5]={"ahmed","mhmd","azad","hassan","znar"};
    int ID_A[5]={123,124,125,126,127};
    string name_B[5]={"znar","joudy","yousef","dilshad","moon"};
    int ID_B[5]={127,129,120,121,122};
    
   
    Student_A A(name_A,ID_A);
    Student_B B(name_B,ID_B,A);
    



    return 0;
}