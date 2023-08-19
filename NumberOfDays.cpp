#include <iostream>

using namespace std;

int main()
{
    int NumberOfDays;  // Declare a variable to store the number of days
    int years;         // Declare a variable to store the years component
    int weeks;         // Declare a variable to store the weeks component
    int days;          // Declare a variable to store the remaining days component

    cout << "Enter the number of days : ";  // Prompt the user to enter the number of days
    cin >> NumberOfDays;  // Read the input number of days from the user

    if (NumberOfDays >= 0)  // Check if the input is non-negative
    {
        years = NumberOfDays / 365;  // Calculate the years component
        NumberOfDays = NumberOfDays - (years * 365);  // Update the remaining days
        weeks = NumberOfDays / 7;  // Calculate the weeks component
        days = NumberOfDays - (weeks * 7);  // Calculate the remaining days

        // Display the converted time in years, weeks, and days format
        cout << "Given number of days when converted in years, weeks, and days are " << years << ", " << weeks << " and " << days;
    }

    else  // if the input is negative
    {
        cout << "Invalid Input" << endl;  // Display an error message for negative input
    }

    return 0;  // Return 0 to indicate successful program execution
}
