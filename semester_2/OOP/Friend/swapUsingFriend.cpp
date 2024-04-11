#include <iostream>
using namespace std;
class Swap
{
private:
    int temp, a, b;

public:
    Swap(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    friend void Swaps(Swap&); 
};
void Swaps(Swap& s1)
{
    cout << "After the swaping : " << "a = " << s1.a << ", " << "b = " << s1.b << endl;
    s1.temp = s1.a;
    s1.a = s1.b;
    s1.b = s1.temp;
    cout << "Before the Swaping : " << "a = " << s1.a << ", " << "b = " << s1.b << endl;

}
int main()
{
    Swap s(1,2);
    Swaps(s);



    return 0;
}