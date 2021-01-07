#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
      int x, count = 0;
      cin >> x;
      int min = x, next;
      cin >> next;
      // Fem el primer cas apart
      if (x < next) ++count;
      // Cas general
      while (next != 0) {
        if (x < min) {
            min = x;
            if (x < next) ++count;
        }
        x = next;
        cin >> next;
      }
      cout << count << endl;
  }
}