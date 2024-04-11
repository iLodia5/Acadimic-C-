#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int MAX_SIZE = 100; // You can adjust the maximum size of the array
    int A[MAX_SIZE];
    int n = 0;
    int consecutiveZeros = 0;

    cout << "Enter numbers (stop with four consecutive zeros):" << endl;

    while (consecutiveZeros < 4) {
        int num;
        cin >> num;

        if (num == 0) {
            consecutiveZeros++;
        } else {
            consecutiveZeros = 0; // Reset if a non-zero number is encountered
            if (isPrime(num)) {
                A[n] = num;
                n++;
            }
        }

        if (n >= MAX_SIZE) {
            cout << "Maximum array size reached. Stopping the program." << endl;
            break;
        }
    }

    cout << "Prime numbers entered:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
