#include <iostream>
#include <fstream>
using std::cout;
int main()
{
    char word[100], str[100];
    // Create and open a file (use write mode only to create file).
    std::fstream myfile;
    myfile.open("myFile.dat", std::ios::out);
    if (!myfile)
    {
        std::cerr << "Fail to create/open file \n";
        return -1;
    }
    // Write to file
    int num = 20;
    myfile << num << " Hello. How are you?";
    myfile.close(); // close the file.
    cout << "Wrote to the file ! \n"
         << std::endl;
    // Read from file
    myfile.open("myFile.dat", std::ios::in);
    myfile >> num >> word;            // read an integer and a word
    myfile.ignore(100, ' ');          // Ignore some spaces
    myfile.getline(str, sizeof(str)); // read to end of line
    cout << "Read from file: " << std::endl;
    cout << num << " " << word << " " << str << "\n";
    myfile.close(); // close the file.
    return 0;
}