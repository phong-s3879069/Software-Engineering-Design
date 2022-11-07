#include <iostream>
using std::cout;
using std::cin;

int findMin(int arr[]) {
    int min = arr[0];

    for (int i = 0; i < sizeof(arr[0]); i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    return min;
}

int main() {
    int size;
    cout << "Enter size for the array: ";
    std::cin >> size;

    //Definie array with the size
    int arr[size];
    std::cout << "Enter an array of numbers: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    cout << "The mininum value is: " << findMin(arr) << "\n";
    return 0;
}