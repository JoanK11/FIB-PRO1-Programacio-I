#include <iostream>
#include <vector>
using namespace std;

typedef vector < vector<int> > Mat;

Mat llegirMat(int n, int m) {
   Mat A(n, vector<int>(m));
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
         cin >> A[i][j];
      }
   }
   return A;
}

// IF YOU WRITE NEW FUNCTIONS/PROCEDURES, ADD THEM HERE
int suma(const Mat& A, int i) {
    int size = A[0].size(), total = 0;
    for (int j = 0; j < size; ++j) total += A[i][j];
    return total;
}

bool sumes_decreixents (const Mat& A){
  // ADD YOUR CODE HERE
  int size = A.size(); 
  for (int i = 1; i < size; ++i) {
      if (suma(A, i) >= suma(A, i - 1)) return false;
  }
  return true;
}

int main() {
   int n, m;
   while (cin >> n >> m) {
      Mat A = llegirMat(n, m);
      if (sumes_decreixents(A)) cout << "YES" << endl;
      else cout << "NO" << endl;
   }
}