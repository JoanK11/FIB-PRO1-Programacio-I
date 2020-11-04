#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    int increasing = 0, folded = 0;
    while (cin >> a >> b >> c >> d) {
        if ((a < b) and (b < c) and (c < d))
            ++increasing;
        else if ((a == c) and (b == d))
            ++folded;
        }
    cout << "Increasing: " << increasing << endl;
    cout << "Folded: " << folded << endl;
}
        
    
        
