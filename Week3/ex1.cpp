#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using std::cerr;
using std::cin;
using std::cout;

int main()
{
    int choice;
    cout << "Password management program: "
         << "\n"
         << "1. Save your password"
         << "\n"
         << "2. Read your password"
         << "\n"
         << "Your Choice: ";

    cin >> choice;

    if (choice == 1)
    { //    Write to file
        char password[100];
        std::fstream passFile;                   // declare an ofstream object
        passFile.open("pwd.dat", std::ios::out); // open file
        if (!passFile)
        {
            std::cerr << "Fail to open file \n";
        }
        // cout << std::endl; // flush to write immediately
        std::cout << "Enter the password: ";
        std::cin.ignore(1, '\n');
        std::cin.getline(password, sizeof(password));
        passFile << password << std::endl;
        std::cout << "Saved to the file!";
        passFile.close();
    }
    else if (choice == 2)
    {
        string line;
        ifstream myFile("pwd.dat");
        cout << "Read from file: ";
        if (myFile.is_open())
        {
            while (getline(myFile, line))
            {
                cout << line << "\n";
            }
            myFile.close();
        }
    }
    else
    {
        cout << "Please choose 1 or 2 only";
    }

    return 0;
}