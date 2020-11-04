#include <iostream>
using namespace std;

int main()
{
    int n;
    string word;
    while (cin >> n) {
        int times = 0;
        bool donald = false;
        for (int i = 0; i < n; ++i) {
            cin >> word;
            if (donald and word == "trump")
                ++times;
            donald = word == "donald";
        }
        cout << times << endl;
    }
}
