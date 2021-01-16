#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

bool are_equal(const Matrix& mat, int i, int j) {
    int n = mat[i].size();
    for (int k = 0; k < n; ++k) {
        if (mat[i][k] != mat[j][k]) return false;
    }
    return true;
}

bool cerca(const Matrix& mat, int i) {
    for (int j = 0; j < i; ++j) {
        if (are_equal(mat, i, j)) return false;
    }
    return true;
}

Matrix read_matrix(int n, int m) {
    Matrix mat(n, Row(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> mat[i][j];
    }
    return mat;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        Matrix mat = read_matrix(n, m); 
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (cerca(mat, i)) ++count;
        }
        cout << count << endl;
    }
}