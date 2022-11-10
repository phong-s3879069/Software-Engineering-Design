#include <iostream>
#include <fstream>
using std::cin;
using std::cout;
using std::string;

class Student
{
private:
    int score;
    string password;
public:
    string name;
    int get_score() {return score;};
    string get_password() {return password;};
    // int score;

    void set_password(string _password) {
        password = _password;
    }

    Student(){}

    Student(string _name, int _score)
    {
        name = _name;
        score = _score;
    }

    void info()
    { // Method (function)
        std::cout << name << ", " << score << "\n";
    }

    void change_pwd(string new_password) {
        
    }

    
};

int main() {
    Student MyStudents[3] = {Student("Phong", 1234),
                             Student("Dat", 809),
                             Student("Bong", 30)};
    int best_score = MyStudents[0].get_score();
    int index = 0;
    for (int i = 0; i < 3; i++) {
        if (best_score < MyStudents[i].get_score()) {
            best_score = MyStudents[i].get_score();
            index = i;
        }
    }

    std::fstream nameFile;
    // nameFile.open("name.dat", std::ios::app);
    // if(!nameFile) {
    //     std::cerr << "Fail to create/open file \n";
    //     return -1;
    // }

    // // Write to file
    // for (int i = 0; i < 3; i++) {
    //     nameFile << MyStudents[i].name << " " << MyStudents[i].get_score() << "\n";
    // }
    // nameFile.close();
    // cout << "Wrote to the file ! \n"
    //      << std::endl;

    cout << "Student has the highest score is: ";
    MyStudents[index].info();
    cout << "\n";
    
    int option;
    cout << "Do you want to change password? " << "1(Yes), " << "2(No)." << "\n";
    cin >> option;
    if (option == 1) {
        string _name;
        cout << "Enter Student's name: ";
        //Enter name to check the password
        std::cin.getline(_name, sizeof(_name));
        //Read file to find the matched name
        nameFile.open("name.dat", std::ios::in);
        
    } else {
        cout << "Thank you";
    }



    


}