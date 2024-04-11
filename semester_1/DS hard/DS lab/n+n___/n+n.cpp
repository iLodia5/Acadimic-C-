#include<iostream>

using namespace std;
int summ(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n + summ(n-1);
    }
}

int main()
{
    int number ;
    cin>>number;
    cout << summ(number);
    return 0;
}