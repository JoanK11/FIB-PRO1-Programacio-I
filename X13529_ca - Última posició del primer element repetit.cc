#include <iostream>
#include <vector>
using namespace std;

bool search(const vector<int>& v, int& j) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        for (j = n - 1; j > i; --j) {
            if (i != j and v[i] == v[j]) return true;
        }
    }
    return false;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        int i;
        if (search(v, i)) cout << v[i] << ' ' << i << endl;
        else cout << "NO" << endl;
    }
}
