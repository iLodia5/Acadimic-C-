#include <iostream>

using namespace std;

int main()
{
    const int sizee = 10;
    int arr[sizee];
    int n;
    int item = 0;
    int numindex = 0;
    int items = 0;

    cout << "enter the number of element : " << endl;
    cin >> n;
    cout << "enter the number of items to add" << endl;
    cin >> items;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements of the array : " << endl;
        cin >> arr[i];
        if (n == sizee)
        {
            cout << "the array is full" << endl;
            break;
        }
    }
    for (int i = 0; i < items; i++)
    {
        for (int i = sizee; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
    }
    for (int j = 0; j < items; j++)
    {
        cout << "enter the item " << j + 1 << endl;
        cin >> item;
        arr[j] = item;
        numindex++;
    }
    n += numindex;

    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
