#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(const vector<int>& v) {
    vector<int> u, w = v;
    sort(w.begin(), w.end());
    int n = v.size();
    if (n > 0) u.push_back(w[0]);
    for (int i = 1; i < n; ++i) {
        if (w[i] != w[i - 1]) u.push_back(w[i]); 
    }
    return u;
}

vector<int> read_vector(int n) {
    vector<int> S(n);
    for (int i = 0; i < n; ++i) 
        cin >> S[i];
    return S;
}

void write_vector(const vector<int>& v) {
    int n = v.size(); 
    cout << "[";
    for (int i = 0; i < n; ++i) { 
        if (i > 0) cout << ", ";
            cout << v[i];
    }
    cout << "]";
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v = read_vector(n);
        vector<int> u = unique(v);
        cout << "unique("; write_vector(v); 
        cout << ") = "; write_vector(u); 
        cout << endl;
    } 
}
