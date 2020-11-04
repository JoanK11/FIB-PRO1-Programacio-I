#include <iostream>
using namespace std;

int main()
{
    char a, b, c;
    cin >> a >> b >> c;
    if (((a == '/' and b == '-') or (b == '/' and c == '-')) or (a == '-' and b == '-' and c == '-'))
        cout << "wrong" << endl;
    else
        cout << "right" << endl;
}
