#include <iostream>
using namespace std;

void sequence()
{
    string word;
    if (cin >> word) {
        sequence();
        cout << word << endl;
    }
}

int main()
{
    sequence();
}
