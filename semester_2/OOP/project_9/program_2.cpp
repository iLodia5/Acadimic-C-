#include<iostream>
using namespace std;
class Myclass 
{
    private:
    int No1,No2;
    public:
    //constructor for intilize
    Myclass(int r =0,int i=0):No1(r),No2(i)
    {}
    //this constructor is important (new idea)
    Myclass operator%(Myclass const &obj)//everytime we put (+) between two objects this constructor it automatically will call
    {
        //object1 = datatype + object2
        Myclass res;
        res.No1 = No1 % obj.No1;
        res.No2 = No2 % obj.No2;
        return res;//return object
    }
    void print()
    {
        cout << "Number 1 = " << No1 << " " << "Number 2 = " << No2 << endl;
    }
};
int main()
{
    Myclass a1(1,2),a2(2,5),a3;
    a3 = a2 % a1;
    cout <<"-----------"<<endl<< "result = ";
    a1.print();
    cout <<"-----------"<<endl<< "NUM1 = " ;
    a2.print();
    cout <<"-----------"<<endl<< "NUM2 = ";
    a3.print();



    return 0;
}