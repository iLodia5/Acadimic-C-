#include <iostream>
using namespace std;
class Swap
{
private:
    int temp, a, b;

public:
    Swap(int a,int b)//constructor
    {
        this->a = a;
        this->b = b;
    }
    friend void DividAble(Swap&);//prototype 
};
void DividAble(Swap& s1)
{
    
    if(s1.a%s1.b == 0)
    {
        cout << "dividable";
    }
    else
    {
        cout << "Not dividable";
    }

}
int main()
{
    Swap s(100,10);
    DividAble(s);



    return 0;
}