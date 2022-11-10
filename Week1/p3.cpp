#include <iostream>
using std::cin;
using std::cout;

#define MAXSIZE 100
int main() {
    // Input the string
    char str[MAXSIZE];
    cout << "Input a string: ";
    cin.getline(str, sizeof(str));//(where you want them stored,maximum number)

    // Convert characters from lowercase to uppercase and vice versa
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    
    cout << "-> Converted String: " << str << "\n";

    return 0;
}
