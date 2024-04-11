#include <iostream>
#include <string>
using namespace std;

// Define a struct to represent a student
struct Student {
    string name;
    int marks;
    int fee;
};

int main() {
    // Create an array of Student objects
    Student students[6];
    
    students[0] = { "osama", 78, 1000 };
    students[1] = { "joudy", 80, 1000 };
    students[2] = { "shyar", 90, 1000 };
    students[3] = { "anas", 60, 1000 };
    students[4] = { "ahmad", 88, 1000 };
    students[5] = { "Ta3mmo", 92, 1000 };
    
    // Sorting the students based on their marks
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (students[i].marks < students[j].marks) {
                swap(students[i], students[j]);
            }
        }
    }
    
    // Print the top 3 students and calculate fees after sale
    for (int i = 0; i < 3; i++) {
        double discount = 0.0;
        switch (i) {
            case 0:
                discount = 0.75;
                break;
            case 1:
                discount = 0.50;
                break;
            case 2:
                discount = 0.25;
                break;
        }
        
        double discountedFee = students[i].fee * (1 - discount);
        cout << students[i].name << " got " << students[i].marks << " marks and is the " << (i + 1) << " student pays 1000 " << endl;
        cout << "after paying the fee on sale: " << discountedFee << endl;
    }

    return 0;
}
