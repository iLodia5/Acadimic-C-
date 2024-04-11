#include <iostream>
using namespace std;
class MaxFinder
{
private:
    int value1, value2;
    float fValue1, fValue2, fValue3;

public:
    MaxFinder(int a, int b) : value1(a), value2(b) {}

    MaxFinder(float x, float y, float z) : fValue1(x), fValue2(y), fValue3(z) {}

    float findMax(){
        int maxInt = (value1 > value2) ? value1 : value2;

        // Find maximum for floats
        float maxFloat = (fValue1 > fValue2) ? ((fValue1 > fValue3) ? fValue1 : fValue3) : ((fValue2 > fValue3) ? fValue2 : fValue3);


        // Return the overall maximum
        return (maxInt > maxFloat) ? static_cast<float>(maxInt) : maxFloat;
    }
};
int main()
{
    MaxFinder fconstractor(10,20);
    MaxFinder sconstractor(30.4,40.5,50.2);

    cout << "the max value is : " << sconstractor.findMax();
    

    return 0;
}