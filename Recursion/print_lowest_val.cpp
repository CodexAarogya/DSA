#include <iostream>
#define size 5
using namespace std;

int printLowest(int arr[], int s) {
    if (s == 0) {
        return arr[0]; // Base case: only one element
    }

    int lowestSoFar = printLowest(arr, s - 1); // Recursive call
    return (arr[s] < lowestSoFar) ? arr[s] : lowestSoFar; // Return the smaller one
}

int main() {
    int array[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter element: ";
        cin >> array[i];
    }

    int lowest = printLowest(array, size - 1);
    cout << "Lowest value: " << lowest << endl;

    return 0;
}
