#include <iostream>
using namespace std;

int sum_of_digits(int x)
{
    if (x < 10)
        return x;
    else {
        return x % 10 + sum_of_digits(x / 10);
    }
}

int reduction_of_digits(int x)
{
    int result = sum_of_digits(x);
    if (result < 10)
        return result;
    else
        return reduction_of_digits(result);
}

int main()
{
    int n;
    while (cin >> n) {
        cout << reduction_of_digits(n) << endl;
    }
}
