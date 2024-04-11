#include<iostream>

using namespace std;


int main()
{
    int sum=0;
    int input=0;
    
    cin>> input ;//2
    while (input>=0)
    {
        
        
        
        
        sum+=input;//sum=2,input=2;sum=4,input=2
        cout << "sum = " << sum<<endl;//sum=2
        cout << "Enter a number to sum with other " << endl;
        cin>> input ;//input=2
        
    }
    cout << "sum = " << sum<<endl;
    


    return 0;
}