#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Info {
    string name;
    int targets;
    int aproxs;
    int fails;
    int points;
};

bool comp(Info a, Info b) {
    if (a.points == b.points) {
        if (a.fails == b.fails) return a.name < b.name;
        return a.fails < b.fails;
    }
    return a.points > b.points;
}

vector<Info> read_vector(int n, int k) {
    vector<Info> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].name >> v[i].targets >> v[i].aproxs;
        v[i].fails = k - v[i].targets - v[i].aproxs;
        v[i].points = v[i].targets*3 + v[i].aproxs;
    }
    return v;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<Info> v = read_vector(n, k);
    sort(v.begin(), v.end(), comp);
    
    for (int i = 0; i < n; ++i) {
        cout << v[i].name << ' ' << v[i].points << ' ' << v[i].fails << endl;
    }
}