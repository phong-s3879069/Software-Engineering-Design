#include <iostream>
#include <cstring>
#include <sstream>
#include <iomanip>
using namespace std;
using std::cin;
using std::cout;
using std::string;

#define NUM_SCORES 3

class Student {
    private:
        string name;
        int scores[NUM_SCORES];
    public:
        string get_name() {
            return name;
        }    
        int* get_scores() {
            return scores;
        }

        void set_name(string nameVal) {
            this->name = nameVal;
        }

        void set_scores(int scoresVal[] = nullptr){
            if (scoresVal != nullptr) {
                for (int i = 0; i < NUM_SCORES; i++) {
                    scores[i] = scoresVal[i];
                }
            }
        }

        Student(string nameVal = "", int scoresVal[] = nullptr) {
            this->name = nameVal;
            if (scoresVal != nullptr) {
                for (int i = 0; i < NUM_SCORES; i++) {
                    scores[i] = scoresVal[i];
                }
            }
        }

        void inputData() {
            
            cout << "\nInput name: ";
            do {
                getline(cin,name);
            } while (name == "");

            cout << "Input scores: ";
            for (int i = 0; i < NUM_SCORES;i++) {
                cin >> scores[i];
            }
            
        }

        void showInfo() {
            cout << name << "\t,";
            for (int i =0; i < NUM_SCORES; i++) {
                cout << " " << scores[i];
            }

            // cout << ", avg = " << std::fixed << std::setprecision(3)
        }

        bool is_greater(Student stu) {
            double temp1;
            double temp2;
            for (int i = 0; i < NUM_SCORES; i++) {
                temp1 += scores[1];
                temp2 += stu.get_scores[i];
            }

            if ((temp1/NUM_SCORES) > (temp2/NUM_SCORES)) {
                return true;
            } else {
                return false;
            }
        }

        friend Student operator + (float num1, Student num2);
};

Student operator +(float num1, Student num2) {
    Student result;
    result.set_name(num2.get_name);
    result.set_scores(num2.get_scores);
    for (int i =0;i<NUM_SCORES;i++) {
        result.get_scores[i] + float;
    }
    return result;
}

int main() {
    std::fstream file;
    file.open("data.txt", std::ios::in);
    if (!file) {
        cout << "Fail to open file \n";
        return -1;
    }

    Student studentArr[10];

    cout << "\nStudent list from the file \n";
    // while (getline(file,line)) {
    // }

    for (int i = 0; i < 10; i++) {
        string name;
        int scores[NUM_SCORES];
        
    }
}
