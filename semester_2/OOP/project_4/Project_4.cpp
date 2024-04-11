#include <iostream>
using namespace std;
class rectangle
{
private:
    float height;
    float width;
    int xpos;
    int ypos;

public:
    rectangle(float, float);//constractor
    rectangle(const rectangle &);//copy constractor
    void draw()
    {
        cout << "Height = " << height << endl
             << "Width = " << width << endl;
    }
};
rectangle::rectangle(float h, float w)
{
    height = h;
    width = w;
    xpos =0;
    ypos =0;
}
rectangle::rectangle(const rectangle& old_rc)
{
    height = old_rc.height;
    width = old_rc.width;
    xpos = old_rc.xpos;
    ypos = old_rc.ypos;
}
int main()
{
    retangle r1(5.0,2.0);
    rectangle rc2(rc1);
    rectangle rc3 = rc1;
    rc3.draw();
    rc1.draw();
    

    return 0;
}