#include <iostream>
using namespace std;

int main() {
    // Define and initialize an array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Display the elements of the array
    cout << "Array elements are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
