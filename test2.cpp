#include <iostream>
using namespace std;

int divisibleBy3(int arr[], int size) {
    if (size < 0) {
        return -1; // Invalid input
    }
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            return -1; // Invalid input
        }
        if (arr[i] % 3 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n > 20 || n < 0) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    int arr[20]; 

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = divisibleBy3(arr, n);

    if (result == -1) {
        cout << "Invalid Input" << endl;
    } else {
        cout << "The count of multiples   of 3 is: " << result << endl;
    }

    return 0;
}
