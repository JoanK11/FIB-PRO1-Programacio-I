#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a != b) or (b != c))
        cout << "Loss" << endl;
    else if (a % 2 == 0)
        cout << "Apples" << endl;
    else if (a % 3 == 0)
        cout << "Bananas" << endl;
    else
        cout << "Joker" << endl;
}
