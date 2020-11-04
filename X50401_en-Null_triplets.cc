#include <iostream>
using namespace std;

int main()
{
    int n, total = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) { // Nombre de casos
        int times, last, previous, next, counter = 0;
        cin >> times >> last >> previous;

        for (int j = 2; j < times; ++j) { // Nombres per cada cas
            cin >> next;
            if (last + next == previous)
                ++counter, ++total;
            last = previous, previous = next;
        }
        cout << counter << endl;
    }
    cout << "Total: " << total << endl;
}
