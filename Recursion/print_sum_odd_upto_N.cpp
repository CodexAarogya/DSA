#include <iostream>
using namespace std;
int oddSum(int n)
{
    if (n < 1)
    {
        return 0;
    }
    else
    {
        if (n % 2 != 0)
        {
            return n + oddSum(n - 1);
        }
        else
            oddSum(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    int sum = oddSum(n);
    cout << "Sum: " << sum;
}