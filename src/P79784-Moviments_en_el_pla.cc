#include <iostream>
using namespace std;

int main() {
    char text;
    int vert = 0, hor = 0;
    while (cin >> text) {
        if (text == 's') ++vert;
        else if (text == 'n') --vert;
        else if (text == 'w') --hor;
        else ++hor;
    }
    cout << '(' << hor << ", " << vert << ')' << endl;
}
