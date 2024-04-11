#include <iostream>
using namespace std;
class Swap
{
private:
    int a;

public:
    Swap(int a)
    {
        this->a = a;
    }
    friend void Swaps(Swap &,Swap&);
};
void Swaps(Swap &s1, Swap &s2)
{
    int temp;
    cout << "Before the swaping : " <<"s1 = " << s1.a << ", " << "s2 = " << s2.a<< endl;
    temp = s1.a;
    s1.a = s2.a;
    s2.a = temp;


    cout << "After the swaping : " <<"s1 = " << s1.a << ", " << "s2 = " << s2.a<< endl;
}
int main()
{
    Swap s(1),s2(2);
    Swaps(s,s2);

    return 0;
}