#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    float mark;

public:
    void Setvalue(string namefunc, float markfunc);

    void printvalue();
};
class Area
{
private:
    float legth, width, area;

public:
    float calcualateArea(float lengthfun, float widthfun)
    {
        float areafunc;
        legth = lengthfun;
        width = widthfun;
        areafunc = legth * width;
        
        return areafunc;
    }
};
class present
{
    public:
    Area showinside;

    float show(float legth,float width)
    {

        cout <<"result = " <<showinside.calcualateArea(legth, width)<<endl;
    }
};

void Student::Setvalue(string namefunc, float markfunc)
{

    name = namefunc;
    mark = markfunc;
}

void Student::printvalue()
{
    cout << "Name = " << name << endl;
    cout << "Mark = " << mark << endl;
}
int main()
{
    string name;
    float mark;
    float area, width, length;
    cout << "Enter the name : " << endl;
    cin >> name;
    cout << "Enter the mark :" << endl;
    cin >> mark;

    Student s;
    s.Setvalue(name, mark);
    s.printvalue();
    Area a;
    present b;
    cout << "Enter a width " <<endl;
    cin>>width;
    cout<< "Enter a length" <<endl;
    cin>>length;
     
    b.show(width,length);
    

        return 0;
}