#include<iostream>
using namespace std;
class Cube
{
    public:
    int side;
    Cube(int x)
    {
        side = x;
    };
};
int main()
{
    Cube a(10);
    Cube b(20);
    Cube c(30);
    cout << "a = " << a.side << endl << "b = " << b.side << endl << "c = " << c.side << endl;
    return 0;
}