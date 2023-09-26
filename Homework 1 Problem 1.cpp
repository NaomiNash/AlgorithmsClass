// -------------------------------------------------------
// Naomi Nash - Saint Leo University - September 14, 2021
// Tests 3 different cases for finding differences in
// run time
// -------------------------------------------------------

#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    // Declares start time
    clock_t startTime = clock();

    // Declares necessary ariables
    int n, sum = 0, ch, i, j, k;

    // Prompts the user for a value for n 
    cout << "Enter the value of n: ";
    cin >> n;

    // Prompts the user to enter a value to start 
    cout << "Enter 1 to start: ";
    cin >> ch;

    // Starts the switch statement for different cases
    switch (ch)
    {
    case 1:

        // First code snippet from homework 
        for (int i = 0; i < n; i++)
            ++sum;

        // Displays the execution time of snippet 1
        cout << double(clock() - startTime) / (double)CLOCKS_PER_SEC << " seconds." << endl;

    case 2:

        // Second code snippet from homework 
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                ++sum;

        // Displays the execution time of snippet 2
        cout << double(clock() - startTime) / (double)CLOCKS_PER_SEC << " seconds." << endl;

    case 3:

        // Third code snippet from homework 
        for (i = 0; i < n; ++i)
            for (j = 0; j < n * n; ++j)
                ++sum;

        // Displays the execution time of snippet 3
        cout << double(clock() - startTime) / (double)CLOCKS_PER_SEC << " seconds." << endl;
        system("pause");

    }
}
