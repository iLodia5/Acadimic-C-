#include<iostream>
using namespace std;
class A 
{
    private:
    int num,num2;
    public:
    A(int n,int d)
    {
        num = n;
        num2 = d;
    }
    operator float () const
    {
        return float (num) / float(num2);
    }
};
int main()
{
    A f(2,3);
    float val = f;
    cout << "val = " << val << endl;
    
    return 0;
}