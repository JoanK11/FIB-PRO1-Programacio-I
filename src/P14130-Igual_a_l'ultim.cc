#include <iostream>
#include <vector>
using namespace std;

void llegir_vector(vector<int>& v) {
    int size = v.size();
    for (int i = 0; i < size; ++i) cin >> v[i];
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n); // Crea un vector de ints de tamany 'n'
    llegir_vector(v);

    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (v[i] == v[n-1]) ++count;
    }
    cout << count << endl;
}
