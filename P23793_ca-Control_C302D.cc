#include <iostream>
using namespace std;

int compara(int d1, int m1, int a1, int d2, int m2, int a2)
{
    int data1 = d1 + 100 * m1 + 1000 * a1;
    int data2 = d2 + 100 * m2 + 1000 * a2;
    if (data1 > data2)
        return 1;
    else if (data1 < data2)
        return -1;
    return 0;
}

int main()
{
    int dia1, mes1, any1, dia2, mes2, any2;
    char barra;
    while (cin >> dia1 >> barra >> mes1 >> barra >> any1
        >> dia2 >> barra >> mes2 >> barra >> any2) {
        int result = compara(dia1, mes1, any1, dia2, mes2, any2);

        if (result < 0)
            cout << "anterior" << endl;
        else if (result > 0)
            cout << "posterior" << endl;
        else
            cout << "iguals" << endl;
    }
}
