#include <iostream>
using namespace std;

int main() {
    // Define and initialize an array
    int arr[] = {1, 5, 3, 19, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Assume the first element is the maximum
    int maxElement = arr[0];

    // Loop through the array to find the maximum element
    for(int i = 1; i < size; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // Display the maximum element
    cout << "The maximum element in the array is: " << maxElement << endl;

    return 0;
}
