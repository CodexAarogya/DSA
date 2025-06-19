#include <iostream>
using namespace std;
int power(int value, int pow)
{
    if (pow == 0)
        return 1;
    if (pow > 0)
    {
        return value * power(value, pow - 1);
    }
}
int main()
{
    int value, pow;
    cout << "Enter the value: ";
    cin >> value;
    cout << "Enter power: ";
    cin >> pow;
    int result = power(value, pow);
    cout << "Result: " << result;
    return 0;
}