#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "El nombre de digits de " << n << " es ";
    int count = 1;
    while (n > 9) {
        ++count;
        n /= 10;
    }
    cout << count << '.' << endl;
}
