// Chapter3Challenge2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void GetUserInput();
void DisplayErrorMessage();
void DisplayFactors(int n);

void GetUserInput()
{
    int num = 0;
    const char newLine = '\n';

    do
    {
        cout << "Enter a positive number (greater than 0): " << endl;
        cin >> num;

        if (!cin || num <= 0)
        {
            cin.clear();
            cin.ignore(INT_MAX, newLine);
            DisplayErrorMessage();
        }
        else
        {
            DisplayFactors(num);
        }

    } while (num <= 0);
}

void DisplayErrorMessage()
{
    cout << "Invalid input, please enter a positive number." << endl;
}

void DisplayFactors(int n)
{
    cout << "Factors of " << n << " are: ";

    for (int i = n; i > 0 && i <= n; i--)
    {
        if (n % i == 0)
        {
            if (i == 1)
            {
                cout << "and " << i;
            }
            else
            {
                cout << i << ", ";
            }
        }       
    }
}

int main()
{
    GetUserInput();
}