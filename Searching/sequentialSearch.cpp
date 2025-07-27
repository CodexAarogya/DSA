#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 87, 98, 69, -23, 234, 56, 23, 89, 111};
    int check;
    cout << "Enter element to search: ";
    cin >> check;
    cout << "Stepwise working: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if (check == arr[i])
        {
            cout << "Element found at index " << i;
            exit(0);
        }
        else
        {
            cout << "Element not found at index " << i;
        }
        cout << endl;
    }
}