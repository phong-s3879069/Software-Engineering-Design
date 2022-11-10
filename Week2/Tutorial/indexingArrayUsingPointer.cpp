#include <iostream>
using std::cout;
int main()
{
    char str[80] = "Hello World"; // Create a character array called str
    cout << "This is origin: " << str << "\n";
    char *p = str;  // Declare and initialise a character pointer
    str[4] = 'X';   // or *(str + 4) = 'X';   //replace the fourth element with 'X' character
    *(p + 5) = 'Y'; // or p[5] = 'Y';         //replace the fifth space with 'Y' character
    cout << str;

    char str2[80] = "Hello Phong World"; // Create a character array called str.
    for (char *p = str2; *p != '\0'; p++)
    {               // pointer arithmetic, iterates through string elements
        cout << *p; // display contents of pointer to screen
    }

    return 0;
}