#include <iostream>
using namespace std;

int main() {
    char inp;
    cin >> inp;
    if ((inp >= 'a' and inp <= 'z') or (inp >= 'A' and inp <= 'Z')) {
        cout << "lletra" << endl;
    }
    else if (inp >= '0' and inp <= '9') {
        cout << "digit" << endl;
    }
    else 
        cout << "res" << endl;
}
