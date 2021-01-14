#include <iostream>
#include <vector>
using namespace std;

void zeros_counter(const vector<int>& u, vector<int>& v) {
    int count = 0;
    for (int i = u.size() - 1; i >= 0; --i) {
        if (u[i] == 0) ++count;
        v[i] = count;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> u(n);
    for (int i = 0; i < n; ++i) cin >> u[i];
    vector<int> v(n, 0);
    zeros_counter(u, v);
    for (int i = 0; i < n; ++i) cout << v[i] << endl;
}