#include<iostream>
using namespace std;

class Distance
{
    private:
    int feet;
    float inches;
    public:
    Distance():feet(0),inches(0.0)
    {}
    Distance(int ft,float inc):feet(ft),inches(inc)
    {}
    void get()
    {
        cout << "feet = " << feet<<endl;
        cout << "inches = " << inches<<endl;
    }


};

int main()
{
    Distance d1;
    cout << "First obj: "<<endl;
    d1.get();
    Distance d2(2,2.3);
    cout << "Sec obj: "<<endl;
    d2.get();
    Distance d3(d2);
    cout << "Third ob: " <<endl;
    d3.get();
    Distance d4 = d2;
    cout << "Forth ob: " <<endl;
    d4.get();
    return 0;
}