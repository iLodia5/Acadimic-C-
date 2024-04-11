#include<iostream>

using namespace std;
class Rectangle
{
    private:
    float width,length,Area;

    public:

    float SetValue(float w,float l)
    {
        
    cout << "Enter the width = " ;
    cin>>w;
    cout << "Enter the length = ";
    cin>> l;
    width = w;
    length =l;

    }

    float calculateArea()
    {
        
        
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
    R.SetValue(w,l);
    R.calculateArea();
    R.print();
    return 0;
}