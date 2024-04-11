#include <iostream>
using namespace std;
class Car{
    public:
    int gear,top_speed;
    Car()//constructor
    {
        cout << "Initializing Values" <<endl;
        gear=4;
        top_speed = 300;

    }
};
int main()
{
    Car car1;

    cout << "Gear : " <<car1.gear <<endl;
    cout << "Top Speed : " << car1.top_speed <<endl;


    return 0;
}