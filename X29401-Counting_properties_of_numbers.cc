#include <iostream>
using namespace std;

int main() {
    int a, b, c, counter = 0;
    while (cin >> a >> b >> c) {
    int aleast = a % 10, bleast = b % 10, cleast = c % 10;
    int atop = a / 100, btop = b / 100, ctop = c / 100;
    
    if ((atop == aleast) and (btop == bleast) and (ctop == cleast)) {
        if ((aleast < bleast) and (bleast < cleast))
            ++counter;
            }
        }
    cout << "3-Increasing: " << counter << endl;
}
