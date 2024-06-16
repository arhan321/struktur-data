#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Elemen-elemen array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += numbers[i];
    }
    cout << "Total elemen array: " << total << endl;

    int max = numbers[0];
    for (int i = 0; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    cout << "Nilai maksimum dalam array: " << max << endl;

    return 0;
}
