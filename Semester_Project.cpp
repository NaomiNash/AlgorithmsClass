// -----------------------------------------------------------------------------
//             Naomi Nash - Saint Leo University - 5 December 2021
// Semester_Project - Uses a stack function to act as a C++ compiler when 
// checking certain user chosen programing files. Checks for balancing of syntax
// symbols such as parathesis (), square brackets [], and curly brackets {}.
// -----------------------------------------------------------------------------

#include<iostream> // Include iostream library
#include<fstream> // Used for reading files
#include<stack> // Includes stack library for stack functions
using namespace std;

// isBalanced function that reads a file and checks the syntax of it
bool isBalanced(string readFile)
{
    // Declares s and ch variables
    stack<char> s;
    char ch;

    // Checks the syntax of the file by checking each character in the determined file
    for (int i = 0; i < readFile.length(); i++)
    {
        // Pushes any parenthesis, square bracket, or curly bracket onto the stack
        if (readFile[i] == '(' || readFile[i] == '[' || readFile[i] == '{')
        {
            s.push(readFile[i]);
            continue;
        }
        // Checks to see if the stack is empty of parenthesis, square brackets, or curly brackets
        // If not empty, this will lead to the "Syntax errors occured" output
        if (s.empty())
            return false;

        // Switches between whether the next character is a closing parenthesis, square bracket, or curly bracket
        switch (readFile[i])
        {
            // If the character is a closing parenthesis, it pops the stack and checks for any curly brackets or square brackets
            case ')':
                // Pops top of stack
                ch = s.top();
                s.pop();
                // Checks for any curly brackets or square brackets
                if (ch == '{' || ch == '[')
                    return false;
                break;
            // If the character is a closing curly bracket, it pops the stack and checks for any parenthesis or square brackets
            case '}':
                // Pops top of stack
                ch = s.top();
                s.pop();
                // Checks for any parenthesis or square brackets
                if (ch == '(' || ch == '[')
                    return false;
                break;
            // If the character is a closing square bracket, it pops the stack and checks for any parenthesis or curly brackets
            case ']': 
                // Pops top of stack
                ch = s.top();
                s.pop();
                // Checks for any parenthesis or curly brackets
                if (ch == '(' || ch == '{')
                    return false;
                break;
        }
    }
    // If the stack is empty after reading the file, it will return true which is the "No syntax error" output
    return (s.empty()); 
}
int main()
{
    // Declares chosenFIle
    string chosenFile;
    // Requestes name of program .txt file
    cout << "What is the name of the program .txt file you would like to check for syntax errors? (include .txt after program name)\n";
    // Puts file name as chosenFile variable
    cin >> chosenFile;

    // Opens the chosenFile as sendFile
    fstream sendFile;
    sendFile.open(chosenFile);

    // Takes program text file contents and turns it into a string variable
    string stringReadFile;
    if (sendFile.is_open())
    {
        sendFile >> stringReadFile;
    }
 
    // Returns if program file its syntax is correct
    if (isBalanced(stringReadFile))
        // If syntax correct
        cout << "No syntax error";
    else
        // If syntax incorrect
        cout << "Syntax errors ocurred";
}