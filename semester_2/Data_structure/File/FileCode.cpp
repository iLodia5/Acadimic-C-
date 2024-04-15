#include<iostream>//first step you should create a file of Text format 'txt'
#include<fstream>//file <header> /library/
using namespace std;
//note :just try to put your text file in not very secure drive like 'C
int main()
{
    //-----------------------------------for (reading) data--------------------------------------------------> in text file
    ofstream f;
    string text = "";
    //to make compiler add text not overwrite and delete the prev data from the text file we can use 'ios::app'
    f.open("C:\\Text.txt",ios::app);
    for(int i=0;i<4;i++)
    {
        cin>>text;
        f<<text<<endl;
    }
    f.close();

    //-----------------------------------for (writing) data--------------------------------------------------> from text file to cmd

    //note:try to put this part of code inside a comment before you run the reading part
    /*
    ifstream g;//we can not use the same name for the ifstream and ofstream
    g.open("C:\\Users\wwwjo\Encapsulation\semester_2\Data_structure\File\Text.txt");
    //next:so next step we should make a loop to check if we reach to the end of the file
    while(!g.eof())
    {
        g>>text;
        cout<<text<<endl;
    }
    g.close();
    */
    return 0;
}