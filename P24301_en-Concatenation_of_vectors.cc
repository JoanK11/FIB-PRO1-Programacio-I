#include <iostream>
#include <vector>
using namespace std;


vector<int> concatenation(const vector<int> & v1, const vector<int> & v2) {
    vector<int> vector = v1;
    for (int i = 0; i < v2.size(); ++i) {
        vector.push_back(v2[i]);
    }
    return vector;
}
/*
int main() {
  int n1;
  while (cin >> n1) {
    vector<int> v1(n1);
    for (int i = 0; i < n1; ++i) cin >> v1[i];
    int n2;
    cin >> n2;
    vector<int> v2(n2);
    for (int i = 0; i < n2; ++i) cin >> v2[i];
    vector<int> res = concatenation(v1, v2);
    cout << res.size() << endl;
    for (int i = 0; i < (int)res.size(); ++i) cout << " " << res[i];
    cout << endl;
  }
}
*/
