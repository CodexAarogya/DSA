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
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

            cout << "i = " << i << ": ";
            display(arr);
        }
        cout << endl;
    }
    cout << "Sorted: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}