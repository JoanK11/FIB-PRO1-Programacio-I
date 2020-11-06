#include <iostream>
using namespace std;

int main()
{
    int hora, minut, retard;
    cin >> hora >> minut >> retard;

    hora += (minut + retard) / 60;
    minut = (minut + retard) % 60;
    hora = hora % 24;

    if (hora < 10)
        cout << '0';
    cout << hora << ':';
    if (minut < 10)
        cout << '0';
    cout << minut << endl;
}
