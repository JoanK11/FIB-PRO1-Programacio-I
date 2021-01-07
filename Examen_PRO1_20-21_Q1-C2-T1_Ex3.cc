#include <iostream>
#include <vector>
using namespace std;

bool esParell(int a) {
    return a%2 == 0;
}

int ultimaPosicio(const vector<int>& v, double x) {
    int size = v.size();
    for (int i = size - 1; i >= 0; --i) {
        if (v[i] < x) return i;
    }
    return -1;
}

int main() {
  int n;
  while (cin >> n) {
      vector<int> v(n);
      int nparells = 0;
      double mitjana = 0;
      for (int i = 0; i < n; ++i) {
          cin >> v[i];
          if (esParell(v[i]) {
              ++nparells;
              mitjana += v[i];
          }
      }
      mitjana /= nparells;
      cout << ultimaPosicio(v, mitjana) << endl;
    }
}