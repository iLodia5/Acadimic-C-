#include<iostream>

using namespace std;


int main()
{
    char sk[10];int top =-1;
    string s;
    cout << "Enter the word  : " <<endl;
    cin>>s;
    for(int i=0; i<s.length();i++)
    {

        top++;
        sk[top] = s[i];
    }
    while(top != -1)
    {
        cout << sk[top];
        top--;
    }



    return 0 ;
}
