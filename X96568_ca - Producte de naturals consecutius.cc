#include <iostream>
using namespace std;

int product_of_consecutive(int x) {
    int lpos = 1, rpos = x;
    while (lpos <= rpos) {
        int mid = (lpos + rpos)/2;
        if (mid*(mid + 1) == x) return mid;
        else if (mid*(mid + 1) > x)  rpos = mid - 1;
        else lpos = mid + 1;
    }
    return -1;
}

int main() {
   int x;
   while (cin >> x) {
      int k = product_of_consecutive(x);
      if (k == -1) cout << x << " NO" << endl;
      else cout << x << " = " << k << "*" << k + 1 << endl;
   }
}