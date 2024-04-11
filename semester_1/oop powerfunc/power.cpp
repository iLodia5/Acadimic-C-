#include <iostream>
#include <cmath>
using namespace std;
double power(double x, int y)

{
    if (y == 0 )
    {
        return 1;
    }
    else if (y > 0)
    {
        double result = 1;
        for (int i = 0; i < y; i++)
        {
            result *= x;
        }
        return result;
    }
    else
    {
        return 1 / power(x, -y);
    }

    return x;
}

int main()
{
    int x, y;
    cout << "Enter the number  :" << endl;
    cin >> x;
    cout << "Enter the power : " << endl;
    cin >> y;
    cout << "the result : " << power(x, y) << endl;

    return 0;
}