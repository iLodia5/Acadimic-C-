#include<iostream>
#include <windows.h>
#include<stdlib.h>
using namespace std;
int a=25;
int sum()
{
     int x=10;
    return x++;
}
int sumwithstatic()
{
     static int x=10;
    return x++;//x=11
}
int main()
{

    int a=100;
    {
        int a=50;
    }
    cout << "a = " << ::a <<endl;//25
    cout << "a = " << a<<endl;//100
    cout << "sum at first time of calling = " << sum()<<endl;
    cout << "sum at second time of calling = " <<sum()<<endl;
    for(int i=0; i<=5;i++)
    {
        for(int j=0; j<59; j++)
        {
            
            if(i<=9)
            {
                cout << "0"<<i;
            }
            if (j<=9)
            {
                cout <<":"<< "0" << j<<endl;
            }
            if(i>9)
            {
                cout << i; 
            }
            if(j>9)
            {
                cout << ":"<<j<<endl;
            }
            Sleep(1000);
            system("cls");
        }

        
        
    }
    
}