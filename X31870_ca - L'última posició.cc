#include <iostream>
#include <vector>
using namespace std;

// documentation and code of effi_last_pos 
// function must be here
int effi_last_pos(const vector<int>& v, int z) {
	int size = v.size();
	int lpos = 0, rpos = size - 1;
	
	 while (lpos < rpos) {
		 int mid = (lpos + rpos)/2;
		 if (v[mid] <= z) lpos = mid + 1;
		 else rpos = mid;
	 }
	 return lpos - 1;
}

//gets vector v from input chanel
void read_vector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cin >> v[i];
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    read_vector(v);
    int z;
    while (cin >> z)
        cout << effi_last_pos(v, z) << endl;
}