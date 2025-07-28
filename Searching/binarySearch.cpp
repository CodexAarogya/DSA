#include <iostream>
using namespace std;
int low = 1;
int high = 10;
bool found = false;
int main()
{
    int arr[10] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
    int search, mid;
    cout << "Enter element: ";
    cin >> search;

    while (low <= high)
    {
        mid = (low + high) * 0.5;
        if (search == arr[mid])
        {
            cout << "Search found at index " << mid;
            found = true;
            exit(0);
        }
        else
        {
            if (search > arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    if (!found)
    {
        cout << search << " not found.";
    }
    return 0;
}