#include <iostream>
using namespace std;

void sequence()
{
    string word;
    cin >> word;
    if (word != "end") {
        sequence();
        cout << word << endl;
    }
}

int main()
{
    sequence();
}
