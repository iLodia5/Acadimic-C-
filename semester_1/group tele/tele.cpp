#include <iostream >

using namespace std;
int age = 10;
class Age
{
private:
int age = 10;

public:

int get()
{ int age=12;
age += ::age;
return age;
}




};
int main()
{
Age a;
cout << a.get();
return 0;
}