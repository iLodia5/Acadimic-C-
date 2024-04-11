#include<iostream>

using namespace std;
class Rectangle
{
    private:
    float width,length,Area;

    public:

    float calculateArea(float w,float l)
    {
        
        width = w;
        length = l;
        Area = width*length;
        return Area;
        

    };
    void print()
    {
        cout << "the width is : " <<width<<endl;
        cout << "the length is : " << length <<endl;
        cout << " width * length = " << Area <<endl;
    }

};
int main()
{
    int w,l;
    Rectangle R;
    cout << "Enter the width = " ;
    cin>>w;
    cout << "Enter the length = ";
    cin>> l;
    R.calculateArea(w,l);
    R.print();
    return 0;
}