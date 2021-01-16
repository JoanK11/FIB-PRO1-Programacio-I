#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector <int> > Matrix;

Matrix read_matrix(int n, int m) {
    Matrix v(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> v[i][j];
    }
    return v;
}

bool even_odds_matrix (const Matrix& M) {
    int n = M.size(), m = M[0].size();
    int even = 0, odd = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i%2 == 0 and M[i][j]%2 == 0)
                even += M[i][j];
            else if (i%2 != 0 and M[i][j]%2 != 0)
                odd += M[i][j];
        }
    }
    return even == odd;
}

int main() {  
    int n, m;
    while (cin >> n >> m) {
        Matrix v = read_matrix(n, m);
        if (even_odds_matrix(v)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}