/*Write a c++ program to inter numbers and save it in array A if its prime and
ignore it otherwise stop the program when 4 zeros occurred consequently*/
#include <iostream>
using namespace std;
void isprime()
{
    int flag = 0;
    int A[100];
    int prime, index = -1;

    while (flag < 4)
    {
        int i = -1;
    A:
        cout << "Enter a number : ";
        cin >> prime;
        if (prime < 0) // if the number is negetive
        {
            cout << "the numbers should be postive !" << endl;
            goto A;
        }
        for (i = -1; i < prime; i++)
        {
            if (prime == 0) // if the number is : 0
            {
                cout << "prime " << endl;
                flag++;
                A[++index] = prime;
                break;
            }
            if (prime == 1) // if the number is : 1
            {
                cout << "prime" << endl;
                A[++index] = prime;
                break;
            }

            if (i >= 2 && prime % i == 0) // if the number is not (0,1) and mod of the input number is 0,then it's not prime
            {
                cout << "Not prime" << endl;
                break;
            }
        }
        if (prime == i) // if the loop complete then the i == input number(prime)
        {
            A[++index] = prime; // store the prime number in array.6
            cout << "prime" << endl;
        }
    }
    cout << "Your array : " << endl;
    // showing the numbers after enter four zeros
    for (int i = 0; i <= index; i++)
    {
        cout << A[i] << " ";
    }
}
int main(void)
{

    isprime();
    main();
    return 0;
}