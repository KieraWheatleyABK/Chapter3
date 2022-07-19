// Chapter3Challenge1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

using namespace std;

int GetCurrentYear();
bool IsLeapYear(int year);
void DisplayYearInfo();

int GetCurrentYear()
{
    struct tm newtime;
    time_t now = time(0);
    localtime_s(&newtime, &now);

    return 1900 + newtime.tm_year;
}

bool IsLeapYear(int year)
{
    if (year % 4 == 0)
    {
        return true;
    }
    else if (year % 400 == 0)
    {
        return true;
    }
    else if (year % 100 == 0)
    {
        return false;
    }
    else
    {
        return false;
    }
}

void DisplayYearInfo()
{
    int currentYear = GetCurrentYear();
    cout << "The current year is " << currentYear << "." << endl;

    if (IsLeapYear(currentYear))
    {
        cout << "This year is a leap year!" << endl;
    }
    else
    {
        cout << "This year is not a leap year." << endl;
    }
}

int main()
{
    DisplayYearInfo();
}