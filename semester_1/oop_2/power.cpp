#include <iostream>
using namespace std;
double Power(double number, int power)
{
    if (power == 0 && number != 0)
    {
        return 1;
    }
    else if (power > 0)
    {
        double result = 1;
        for (int i = 0; i < power; i++)
        {
            result *= number;
        }
        return result;
    }
    else
    {
        return 1 / Power(number, -power);
    }
    return number;
}
int main()
{
    return 0;
}