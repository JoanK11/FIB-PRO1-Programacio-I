#include <iostream>
#include <vector>

using namespace std;

struct Things {
    string name;
    string color;
    string poison;
    string burns;
    double height;
};

typedef vector<Things> Forest;

void read_data(Forest& v) {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        Things x;
        cin >> x.name >> x.color >> x.poison;
        cin >> x.burns >> x.height;
        v.push_back(x);
    }
}

int count(const Forest& v, string name, string color,
          string poison, string burns, double height) {
    int n = v.size(), total = 0;
    for (int i = 0; i < n; ++i) {
        if ((v[i].name == name or name == "*") and
        (v[i].color == color or color == "*") and
        (v[i].poison == poison or poison == "*") and
        (v[i].burns == burns or burns == "*") and
        (v[i].height >= height)) ++total;
    }
    return total;
}

int main() {
    Forest v;
    read_data(v);
    
    string n, c, p, b;
    double h;
    while (cin >> n >> c >> p >> b >> h)
        cout << count(v, n, c, p, b, h) << endl;
}