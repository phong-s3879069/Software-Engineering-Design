#include <iostream>
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
    int get_password() {return password;};
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

    cout << "Student has the highest score is: ";
    MyStudents[index].info();
    cout << "\n";

}