// 4-recursion
#include<iostream>

using namespace std;
int Sum(int n)//if n=5! = 5 + 4 + 3 + 2 + 1 + 0
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n + Sum(n-1);
    }
}
int main()
{
    int n;
    cout << "Enter n : " <<endl;
    cin>> n;
    cout << "sum function = " << Sum(n) <<endl;



    return 0;
}