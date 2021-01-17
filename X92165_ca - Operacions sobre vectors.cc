#include <iostream>
#include <vector>
using namespace std;

// read the elements and write them in a vector
vector<string> read_vector(int n) {
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    return v;
}

// print the elements of a vector leaving a space between them
void print_vector(const vector<string>& v) {
    int size = v.size();
    if (size > 0) {
        for (int i = 0; i < size - 1; ++i) cout << v[i] << ' ';
        cout << v[size -1];
    }
    cout << endl;
}

// Search element in a vector sorted in ascending order.
// The function returns the index where the element is located,
// or -1 if the element is not found.
int search_element(const vector<string>& v, string x, int lpos, int rpos) {
    if (lpos > rpos) return -1;
    int mid = (lpos + rpos)/2;
    if (v[mid] == x) return mid;
    else if (v[mid] > x) return search_element(v, x, lpos, mid - 1);
    return search_element(v, x, mid + 1, rpos);
}

// Insert an element (only if it is not already in the vector).
// pre: vector is sorted in ascending order.
// post: vector is sorted in ascending order and contains x.
void element_insertion(vector<string>& v, string x) {
    int n = v.size(), i = search_element(v, x, 0, n - 1);
    if (i == -1) {
        v.push_back(x);
        int j = n - 1;
        while (j >= 0 and v[j] > x) {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = x;
    }
}

// Delete an element (only if it is present in the vector)
// pre: vector is sorted in ascending order.
// post: vector is sorted in ascending order and does not contain x.
void element_deletion(vector<string>& v, string x) {
    int n = v.size(), i = search_element(v, x, 0, n - 1);
    if (i != -1) {
        while (i < n - 1) {
            v[i] = v[i + 1];
            ++i;
        }
        v.pop_back();
    }
}

// read the number of operations and treat them
void read_treat_operation(vector<string>& v) {
    int num_ops;
    cin >> num_ops;
    for (int i = 0; i < num_ops; ++i) {
        string op, elem;
        cin >> op >> elem;
        if (op == "INS") element_insertion(v, elem);
        else if (op == "DEL") element_deletion(v, elem);
    }
}

int main() {
    int n;
    while (cin >> n) {
        vector<string> v = read_vector(n);
        read_treat_operation(v);
        print_vector(v);
    }
}