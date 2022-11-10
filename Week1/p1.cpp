#include <iostream>
using std::cout;
using std::cin;

int main() {
    double a,b;

    cout << "Enter value of a";
    cin >> a;

    cout << "Enter value of b";
    cin >> b;

    if (a == 0) {
        if (b == 0) {
            std::cout << "There are infinite result ( for any value of x) \n";   
        } else {
            std::cout << "There are invalid input \n";
        }
    } else {
        std::cout << "-There is one root: x =" << -b / a << "\n";
    }
    return 0;
}