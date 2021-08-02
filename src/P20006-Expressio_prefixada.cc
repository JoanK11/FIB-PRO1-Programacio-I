#include <iostream>
using namespace std;

int expressio() {
    char c;
    cin >> c;
    if (c >= '0' and c <= '9') return c - '0';
    
    int a = expressio();
    int b = expressio();
    if (c == '+') return (a + b);
    else if (c == '-') return (a - b);
    return a*b;
}

int main() {
    cout << expressio() << endl;
}
