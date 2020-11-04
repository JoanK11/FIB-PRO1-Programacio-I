#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int aleast = a % 10, bleast = b % 10, cleast = c % 10;
    int atop = a / 100, btop = b / 100, ctop = c / 100;
    
    if ((atop == aleast) and (btop == bleast) and (ctop == cleast)) {
        if ((aleast < bleast) and (bleast < cleast))
            cout << "3-Increasing" << endl;
        else if ((aleast > bleast) and (bleast > cleast))
            cout << "3-Decreasing" << endl;
        else 
            cout << "Nothing" << endl;
        }
        else
            cout << "Nothing" << endl;
    }
        
    
