#include <iostream>
using namespace std;
class Car
{
public:
    // data member
    int gear, speed;

    // constructor
    Car(int gear_no, int Top_speed)
    {
        gear = gear_no;
        speed = Top_speed;
    }
};
class Student
{
public:
    string name;
    int mark;
    Student(string n, int m) : name(n), mark(m)
    {
    }
};
int main()
{
    // pass value to constructor
    Car car1(4, 100);
    Car car2(1, 233);
    Student student1("joudy",100);

    // print data
    cout << "gear of car 1 :" << car1.gear << endl;
    cout << "gear of car 2 :" << car2.gear << endl;
    cout << "speed of car 1 :" << car1.speed << endl;
    cout << "speed of car 1 :" << car2.speed << endl;
    cout << "Student one :" << student1.name << " " << " his mark "<< student1.mark <<endl; 

    return 0;
}