#include<iostream>

using namespace std;
string changename(char &change,string &Name )
{
    cout << "Enter the name to change it "<<endl;
    cin>>Name;
}
string changename(char &change,string &Name,string &lastname)
{
    cout << "Enter the last name " << endl;
    cin>>lastname;
    cout << "this is the second func " << Name << " " << lastname<<endl;
}
int main()
{
    string name;
    char change;
    string last ="ahmed";
    cout << "Enter a name : " <<endl;
    cin>>name;
    
    cout << "Do you want to change the name(Y/N): " <<endl;
    cin>>change;
    if(change == 'Y'||change == 'y')
    {
        cout << "Edit the name : " <<endl;
        cout << "first func = " << changename(change,name);


    }
    else if (change == 'N'||change == 'n')
    {
        cout <<changename(change,name,last) <<endl;
    }
    else 
    {
        cout << "it's only yes or no  " <<endl;
    }
    
    


    return 0;
}
