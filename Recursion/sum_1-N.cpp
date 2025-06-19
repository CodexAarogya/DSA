#include <iostream>
using namespace std;
int printSum(int n)
{
    if (n < 1)
    {
        return 0;
    }
    return n + printSum(n - 1);
}
int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    int total = printSum(n);
    cout << "Sum: " << total;
}