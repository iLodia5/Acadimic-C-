#include <iostream>
using namespace std;
int recursive(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*recursive(n-1);
    }
}
int main()
{
    int n;
    cout << "Enter the number to factory it : " <<endl;
    cin>>n;
    cout << "recursive of number is : " << recursive(n) <<endl;



    return 0;
}
