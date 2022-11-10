#include <iostream>
using std::cout;
using std::cin;
#define ARRSIZE 5

int main() {
    int arr[ARRSIZE];

    //Input 5 integers into an array
    cout << "Enter 5 integers: ";
    for (int i = 0; i < ARRSIZE; i++) {
        cin >> arr[i];
    }

    // Calculate max and average
    int max = arr[0];
    int sum = arr[0];
    for (int i = 0; i <ARRSIZE; i++) {
        //update max if found larger value
        if (max < arr[i]) {
            max = arr[i];
        }
        //calculate sum
        sum = sum + arr[i];
    }

    double average = (double) sum / ARRSIZE;

    cout << "Max = " << max
         << ", Average = " << average << "\n";
    return 0;
}

