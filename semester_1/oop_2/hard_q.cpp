#include<iostream>

using namespace std;

int main()
{
    int x=0,y=2345,flipx=0;//flip y =5432 with out array
    while (y>0)
    {
        x=y%10;
        y= y/10;
        x=x*10+y%10;
        y=y/10;
        cout << "y = " << y <<endl << "x = " << x<<endl;
    }
    

    return 0;
}