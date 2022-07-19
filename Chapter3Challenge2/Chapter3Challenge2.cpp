// Chapter3Challenge2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int num;

void GetUserInput();
void DisplayErrorMessage();
void DisplayFactors();

void GetUserInput()
{
    do
    {
        cout << "Enter a positive number (greater than 0): " << endl;
        cin >> num;

        if (cin.fail())
        {
            DisplayErrorMessage();
        }
    } while (!cin.fail());
    
}

void DisplayErrorMessage()
{
    cout << "Invalid input, please enter a positive number." << endl;
}

void DisplayFactors()
{

}

int main()
{
    GetUserInput();
}
