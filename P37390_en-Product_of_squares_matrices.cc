#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& A, const Matrix& B) {
    int n = A.size();
    Matrix C(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
            C[j][k] += A[j][i]*B[i][k];
            }
        }
    }
    return C;
}

/*
int main ()
{
    int n;
    while (cin >> n) {
        Matrix A(n, vector<int>(n));
        Matrix B(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> A[i][j];
        }   }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> B[i][j];
        }   }
        Matrix C = product(A,B);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
*/