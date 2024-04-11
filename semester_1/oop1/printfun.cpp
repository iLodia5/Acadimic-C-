#include<iostream>

using namespace std;
void print (int &x);

int main()
{
    int a=10;
    cout <<a<<endl;//10
    print (a);//5
    cout << "x= " <<a<<endl;


    return 0;
}
void print (int &x)
{
    x=5;
    cout << "&x= " <<x <<endl;
}