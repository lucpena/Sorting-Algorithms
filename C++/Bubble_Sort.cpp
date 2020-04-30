/*
    This program uses the Bubble Sort Algorithm to sort an array of integers 
*/

#include <iostream>

using namespace std;

int main() {
    int arr[] = {120, 98, 75, 3, 9, 34, 33, 89, 55};
    int i, j, x, temp;

    // sizeof(arr) returns the size in bytes, so we need to divide by the size of only
    // one value in bytes too, now we have the number of values in the array  
    int arrSize = sizeof(arr)/sizeof(arr['0']);

    // Bubble Sort
    for (i = 0; i < arrSize - 1; i++) {
        for (j = 0; j < arrSize - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;   
            }
        }
    }
    
    // Print
    for (int k = 0; k < arrSize; k++) {
        cout << arr[k];
        if (k != arrSize - 1) {
            cout  << ", ";
        }        
    }
    
    return 0;
}