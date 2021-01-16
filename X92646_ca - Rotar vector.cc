#include <iostream>
#include <vector>
using namespace std;

// reads the  contents of an integer vector of size n  from cin
vector<int> read_vector(int n) {
     vector<int> v(n);
     for (int i = 0; i < n; ++i) 
         cin >> v[i];
     return v;
}

void swap(int& x, int& y) {
    int z = x;
    x = y;
    y = z;
}

// reverses a vector in the segment between from and to
void reverse(vector<int>& v, int from, int to) {
    int mid = from + (to - from + 1)/2 - 1;
    for (int i = from; i <= mid; ++i) swap(v[i], v[to +from - i]);
}

// rotates the vector as explained in the statement of the problem
void rotate_right(vector<int>& v, int k) {
    int n = v.size();
    if (n > 0) {
        reverse(v, 0, n - 1);
        reverse(v, 0, k - 1);
        reverse(v, k, n - 1);
    }
}

// write a vector of n integers to cout, with blanks to separate 
// the n values
void write_vector(const vector<int>& v) {
    int n = v.size();
    if (n > 0) cout << v[0];
    for (int i = 1; i < n; ++i) cout << ' ' << v[i];
}

int main() {
    int n; cin >> n;
    vector<int> v = read_vector(n); 
    int k; cin >> k;
    rotate_right(v, k);
    write_vector(v); cout << endl;
} 