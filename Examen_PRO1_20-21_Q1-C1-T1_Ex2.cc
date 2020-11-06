#include <iostream>
using namespace std;

int main()
{
    int n;
    char lletra1, lletra2;
    cin >> n >> lletra1 >> lletra2;

    int counter = 0;
    for (int i = 0; i < n; ++i) {
        char x;
        cin >> x;
        if ((x >= lletra1) and (x <= lletra2))
            ++counter;
    }
    cout << counter << endl;
}
