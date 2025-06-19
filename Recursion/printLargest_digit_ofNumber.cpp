#include <iostream>
using namespace std;

int largestValue(int digit, int rem)
{
    if (digit == 0)
        return rem;

    int currentDigit = digit % 10;
    if (currentDigit > rem)
        rem = currentDigit;

    return largestValue(digit / 10, rem);
}

int main()
{
    int digit;
    cout << "Enter a digit: ";
    cin >> digit;
    int result = largestValue(digit, 0); // Start with 0 as initial largest digit
    cout << "Largest Digit: " << result << endl;
}
