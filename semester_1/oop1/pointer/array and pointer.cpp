#include<iostream>

using namespace std;

int* add_ten(int* data)
{
    for(int i=0; i<5; i++)
    {
        *(data + i) = *(data + i) + 10;

    }
    return data;
}


int main()
{
    int data[5] = {1,2,3,4,5};
    int *result;
    result = add_ten(data);
    for(int i=0; i<5; i++)
    {
        cout << "result of " << (i+1) <<" : "<< *(result+i) <<endl;
    }
    return 0;
}