#include <iostream>
#include <fstream>
using std::cout;
using std::cin;
using std::cerr;

int main() {
    int choice;
    cout << "Password management program: "
    << "\n" << "1. Save your password"
    << "\n" << "2. Read your password"
    << "\n" << "Your Choice: ";

    cin >> choice;

    char password[100];
    std::fstream passFile; // declare an ofstream object
    passFile.open("pwd.dat", std::ios::out); // open file
    if (!passFile) {
        std::cerr << "Fail to open file \n";
    }

    if (choice == 1) {
    //    Write to file 
        
        // cout << std::endl; // flush to write immediately
        std::cout << "Enter the password: ";
        std::cin.ignore(1, '\n');
        std::cin.getline(password, sizeof(password));
        passFile << password << std::endl;
        std::cout << "Saved to the file!";
        passFile.close();
    }
    else if (choice == 2) {
        passFile.open("pwd.dat", std::ios::in);
        passFile >> password;
        cout << "Read from file: " << std::endl;
        cout << password << "\n";
        passFile.close();
        
    } else {
        cout << "Please choose 1 or 2 only";
    }

    return 0;

    
}