#include <iostream>
using namespace std;
class sample
{
private:
    int id;

public:
    void intialize(int x)
    {
        id = x;
    }
    void display()
    {
        cout << "ID = " << id << endl;
    }
};
int main()
{
    // first object
    sample obj1;
    obj1.intialize(20);
    obj1.display();
    // second object
    sample obj2;
    obj2.display();
    // third object
    sample obj3(obj1); // obj3 == obj1
    obj3.display();

    return 0;
}