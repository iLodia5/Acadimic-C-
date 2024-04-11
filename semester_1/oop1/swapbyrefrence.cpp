#include<iostream>



using namespace std;
void print (int *x)
{
    *x=5;
    cout << "&x= " <<*x <<endl;
}
void Swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;

}

void print (int *x);

int main()
{
  int a,b;
  cout << "Enter a and b to swap " <<endl;
  cin>>a>>b;
  cout <<"before" <<endl<< "a= " << a<<", "<<"b= " << b <<endl;
  swap(a,b);
  cout <<"after" <<endl<< "a= " << a<<", "<<"b= " << b <<endl;



    return 0;
}