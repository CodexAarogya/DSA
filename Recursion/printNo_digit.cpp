// Issue: It donot count the zero declared initially

#include <iostream>
using namespace std;
int counter = 0;
int digiCount(int value)
{
    if (value != 0)
    {
        int div = value / 10;
        if (div >= 0)
        {
            ++counter;
            digiCount(div);
        }
        return counter;
    }
    else
        return 1;
}
int main()
{
    int digit;
    cout << "Enter a digit: ";
    cin >> digit;
    int count = digiCount(digit);
    cout << count;
}