#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Info {
    string code;
    int gross_income;
};

bool comp(Info x, Info y) {
    if (x.gross_income == y.gross_income)
        return x.code < y.code;
    return x.gross_income > y.gross_income;
}

void print(const vector<Info>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i)
        cout << v[i].code << ' ' << v[i].gross_income << endl;
}

vector<Info> read_vector(int n) {
    vector<Info> v(n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> v[i].code >> x >> y;
        v[i].gross_income = x*y;
    }
    return v;
}

int main() {
    int n;
    while (cin >> n) {
        vector<Info> v = read_vector(n);
        sort(v.begin(), v.end(), comp);
        print(v);
        cout << endl;
    }
}