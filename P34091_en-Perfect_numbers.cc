#include <cmath>
#include <iostream>
using namespace std;

bool is_perfect(int n)
{
    int counter = -n;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0)
            counter += i + (n / i);
    }
    return (counter == n and n > 1);
}

int main()
{
    int x;
    while (cin >> x) {
        cout << is_perfect(x);
    }
}
