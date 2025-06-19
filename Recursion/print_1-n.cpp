#include <iostream>
using namespace std;
void print(int n)
{
    if (n > 0)
    {
        print(n - 1);
        cout << n << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    print(n);
}