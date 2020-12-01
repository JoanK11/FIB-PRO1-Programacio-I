#include <iostream>
#include <vector>
using namespace std;

string resultat(vector<int>& vector, int total) {
    int n = vector.size();
    for (int i = 0; i < n; ++i) {
        if (total - vector[i] == vector[i])
        return "YES";
    }
    return "NO";
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> vector(n);
        int total = 0;

        for (int i = 0; i < n; ++i) {
            cin >> vector[i];
            total += vector[i];
        }
        cout << resultat(vector, total) << endl;
    }
}
