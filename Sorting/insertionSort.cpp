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
    for (int i = 1; i < 5; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            display(arr);
        }
        arr[j + 1] = key;
    }
    cout << "Sorted: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}