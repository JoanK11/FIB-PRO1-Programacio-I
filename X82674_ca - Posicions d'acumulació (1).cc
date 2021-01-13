#include <iostream>
#include <vector>
using namespace std;

int cerca(const vector<int>& v) {
	int count = 0, size = v.size();
	for (int i = size - 1; i >= 0; --i) {
		int j = i - 1, total = 0;
		while (j >= 0 and v[i] > total) {
			total += v[j];
			--j;
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