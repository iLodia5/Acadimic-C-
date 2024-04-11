#include<iostream>

using namespace std;

int main()
{
    // backslash zero mean that it's end of indexes or end of array or end of string 
    string s;
    string f;
    s = "a+b*c";
    cin>> s;

    for(int i=0; i<s.length(); i++)
    {
        cout << "s[" << i << "]= " << s[i] <<endl;
    }
    /*
    using while :

    int i=0;

    while (s[i] != '\0')
    {
        cout << "s[" << i << "]= " << s[i] <<endl;
        i++;
    }*/
    

    //f

   

    


    return 0;
}