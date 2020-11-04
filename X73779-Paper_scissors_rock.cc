#include <iostream>
using namespace std;

int main() {
    string name1, name2;
    cin >> name1 >> name2;
    int counter1 = 0, counter2 = 0, tie = 0, total = 0;
    char x, y;
    
    while (cin >> x >> y) {
    if ((x == 'P' and y == 'R') or (x == 'R' and y == 'T') or (x == 'T' and y == 'P'))
        ++counter1;
    else if (x == y)
        ++tie;
    else
        ++counter2;
    ++total;
    }
    
    cout << name1 << ' ' << counter1 << endl;
    cout << name2 << ' ' << counter2 << endl;
    cout << "Ties " << tie << endl;
    cout << "Total " << total << endl;
    }

    
    
    
