#include<iostream>

using namespace std;
int xpowy(int number,int power)
{
    if(power == 0)
    {
        return 1;
    }
    else
    {
        return (number * xpowy(number,power-1));
    }
}
int main()
{
    int number,power;
    cout << "Enter the number and the power" <<endl;
    cin>>number>>power;
    cout << "the " << number << " power " << power << " = " << xpowy(number,power) <<endl;


    return 0;
}
