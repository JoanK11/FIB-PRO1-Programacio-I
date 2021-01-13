#include <iostream>
#include <vector>
using namespace std;

int cerca(const vector<int>& v) {
	int size = v.size(), count = 0;
	for (int i = 0; i < size; ++i) {
		int j = i + 1, total = 0;
		while (j < size and v[i] > total) {
			total += v[j];
			++j;
		}
		if (v[i] == total) ++count;
	}
	return count;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		cout << cerca(v) << endl;
	}
}