#include<iostream>

using namespace std;

int main()
{
    const int s =10;

    int a[s];

    int n,item,pos,m;//m=number of postion and items
    //number of elements
    cout << "Enter the number of elements : " <<endl;
    cin>>n;
    //enter the elements of array
    cout << "elements of array : " <<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //enter the number of items with it's postions
    cout << "the number of items : " ;
    cin >> m;
    for(int i=0; i<m; i++)
    {
        cout << "item " <<i << ": " ;
        cin>>item;
        n++;
        cout << "postion " <<i <<": " ;
        cin >> pos;
        a[pos-1] = item;
        //number of element


    }

    //shifting
    for(int i=n; i<=pos; i--)
    {
        a[i]=a[i-1];
    }
    //add item at last
    cout << "enter item to add at last : " <<endl;
    cin >>item;

    a[n] = item;
    n++;


    //print
    for(int i=0; i<n; i++)
    {
        cout<< a[i]<<endl;
    }


    return 0;



}
