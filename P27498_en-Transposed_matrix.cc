#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matrix;

void transpose(Matrix& M) {
    int n = M.size();
    for (int i = 0; i < n; ++i) {
        // Nomes canviem les posicions per baix de la diagonal
        for (int j = 0; j < i; ++j) {
                int z = M[i][j];
                M[i][j] = M[j][i];
                M[j][i] = z;
        }
    }
}
/*
int main ()
{
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> M[i][j];
        }   }
        transpose(M);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
*/
