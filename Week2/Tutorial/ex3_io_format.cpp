#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;

int main() {
    // a) Read a string from the console input, store the string in character array str. Then print out its all characters, separated by a space.
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, sizeof(input));
    for (int i = 0;  input[i] != '\0'; i++) {
       cout << input[i] << " ";
    }
    cout << "\n\n";

    // b)	Print 1.234 with 9-character width, padded by zeros.
    cout << std::setw(9) << std::setfill('0') << 1.234 <<"\n\n";  
    
    // c) Print 1.234 with precision is 2 digits of fractional part (after decimal point). 
    cout << std::setprecision(2) << 1.234 << "\n\n";

    // d) Read a hexadecimal value (preceded by 0x) into variable hex, then print out its decimal value and hexa form.
    int num;
    cout << "Input a hexa value: ";
    cin >> std::hex >> num;
    cout << num << " " << std::hex << std::showbase << num << "\n\n";

    return 0;
}