#include <iostream>
using namespace std;

int main() {
    int gastos, euros, weeks, paga, times = 0, sum = 0;
    cin >> gastos >> euros >> weeks;
    for (int i = 0; i < weeks; ++i) {
        cin >> paga;
        sum += paga - gastos;
        if (sum + euros > 0) ++times;
    }
    cout << times << endl;
}
