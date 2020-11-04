#include <iostream>
using namespace std;

bool acaba_en_quaranta_dos(int x)
{
    return (x % 100 == 42);
}

int main()
{
    int times, number = 1;
    while (cin >> times) { // Nombre de casos
        int x, count = 0;
        for (int i = 0; i < times; ++i) { // Nombres per cada cas
            cin >> x;
            if (acaba_en_quaranta_dos(x))
                ++count;
        }
        cout << '#' << number << ": " << count << endl;
        ++number;
    }
}
