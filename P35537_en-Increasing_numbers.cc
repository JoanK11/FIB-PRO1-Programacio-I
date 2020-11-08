#include <iostream>
using namespace std;

bool is_increasing(int x)
{
    if (x < 10)
        return true;
    else
        return (x % 10 >= (x / 10) % 10 and is_increasing(x / 10));
}

int main()
{
    int n;
    while (cin >> n)
        if (is_increasing(n))
            cout << "true" << endl;
        else
            cout << "false" << endl;
}
