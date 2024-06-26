#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool swapped; 
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
            cout << "Langkah " << i + 1 << ", Iterasi " << j + 1 << ": ";
            for (int k = 0; k < n; k++)
                cout << arr[k] << " ";
            cout << endl;
        }
        if (!swapped)
            break;
    }
}

int main() {
    int arr[] = {5, 7, 3, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    // function bubble sort 
    bubbleSort(arr, n);
    
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}




