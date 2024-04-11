#include <iostream>
using namespace std;
class complex
{
private:
    float a, b;

public:
    void get()
    {
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;
        system("cls");
    }
    void disp()
    {
        
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    friend complex sum(complex c1,complex c2)
    {
        complex c3;
        c3.a = c2.a + c1.a;
        c3.b = c2.b + c1.b;
        return c3;

    }
};
int main()
{
    complex x,y,z;
    cout << "Enter x elements : "<<endl;
    x.get();
    cout << "Enter y elements : "<<endl;
    y.get();
    system("cls");
    cout << "x elements : " <<endl;
    x.disp();
    cout << "y  elemnts : " <<endl;
    y.disp();
    
    z=sum(x,y);
    cout << "'x' + 'y' : z = " <<endl;
    z.disp();


    return 0;
}