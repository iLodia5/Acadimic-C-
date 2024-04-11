#include <iostream>
#include <string.h>
using namespace std;
class Myclass
{
private:
    char *string1;
    int sizeA;

public:
    Myclass(const char *);
    ~Myclass() { delete[] string1; }
    void ptr();
};
Myclass::Myclass(const char *n)
{
    string1 = strcpy(new char[strlen(n) + 1],n);//strcpy(destination,source) : string copy
    sizeA = strlen(string1); // strlen (string) the length of the string
}
void Myclass::ptr()
{
    cout << "the string is : " << string1;
}
int main()
{
    Myclass object("Hello");


    return 0;
}