#include <iostream>
using namespace std;
void display(int arr[], int size = 5)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {10, 12, -3, 0, 99};
    int minimum;
    int min_index = 0;
    bool min_found = false;
    for (int i = 0; i < 5; i++)
    {
        minimum = arr[i];
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < minimum)
            {
                minimum = arr[j];
                min_index = j;
                min_found = true;
            }
        }
        if (min_found)
        {
            int temp = arr[i];
            arr[i] = minimum;
            arr[min_index] = temp;
            display(arr);
        }
        min_found = false; // to avoid the condition: if no new minimum value found in new iteration i.e new min = prev min
    }

    cout << "Sorted: ";
    display(arr);
}