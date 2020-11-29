#include <iostream>
using namespace std;

double factorial(int x)
{
    if (x < 2)
        return 1;
    else
        return x * factorial(x - 1);
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(10);
    int x;
    while (cin >> x) {
        double result = 0;
        for (int i = 0; i < x; ++i) {
            result += (1 / factorial(i));
        }
        cout << "With " << x << " term(s) we get " << result << '.' << endl;
    }
}
