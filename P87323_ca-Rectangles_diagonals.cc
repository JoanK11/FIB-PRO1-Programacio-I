#include <iostream>
using namespace std;

int main()
{
    int fila, columna;
    cin >> fila >> columna;
    for (int i = 0; i < fila; ++i) {
        for (int j = 0; j < columna; ++j) {
            if (j >= i)
                cout << (j - i) % 10;
            else
                cout << (i - j) % 10;
        }
        cout << endl;
    }
}
