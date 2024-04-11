//Write a C++ program that calculate the number of (day)s between two date.

#include <iostream>
#include <ctime>
using namespace std;

int daysBetween(int day1, int month1, int year1, int day2, int month2, int year2) {
    tm date1, date2;
    date1.tm_year = year1;
    date1.tm_mon = month1 - 1;
    date1.tm_mday = day1;

    date2.tm_year = year2;
    date2.tm_mon = month2 - 1;
    date2.tm_mday = day2;

    time_t time1 = mktime(&date1);
    time_t time2 = mktime(&date2);

    return (time2 - time1) / (60 * 60 * 24);
}


int main() {
    int day1, month1, year1;
    int day2, month2, year2;

    cout << "Enter the first date (day month year): ";
    cin >> day1 >> month1 >> year1;

    cout << "Enter the second date (day month year): ";
    cin >> day2 >> month2 >> year2;

    int days = daysBetween(day1, month1, year1, day2, month2, year2);

    cout << "There are " << days << " days between " << day1 << " " << month1 << " " << year1 << " and " << day2 << " " << month2 << " " << year2 << endl;

    return 0;
}