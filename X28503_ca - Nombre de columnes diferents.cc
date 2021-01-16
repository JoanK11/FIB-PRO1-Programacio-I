#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

bool isEqual(const Matrix& v, int j1, int j2) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        if (v[i][j1] != v[i][j2]) return false;
    }
    return true;
}

Matrix read_matrix(int n, int m) {
    Matrix v(n, Row(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> v[i][j];
    }
    return v;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        Matrix mat = read_matrix(n, m);
        int count = 0;
        for (int j1 = 0; j1 < m; ++j1) {
            bool igual = false;
            int j2 = 0; 
            while (j2 < j1 and not igual) {
                igual = isEqual(mat, j1, j2);
                ++j2;
            }
            if (not igual) ++count;
        }
        cout << count << endl;
    }
}