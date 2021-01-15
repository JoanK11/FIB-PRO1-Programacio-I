#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int NCHAR = 5;

// returns first NCHAR chars of w (assuming that w.size() >= NCHAR)
string SelectFirstChars (const string& w) {
  string s = "";
  for (int j = 0; j < NCHAR; ++j)
     s.push_back(w[j]);
  return s;
}

// IF YOU WRITE NEW FUNCTIONS/PROCEDURES, ADD THEM HERE

// returns last NCHAR chars of w (assuming that w.size() >= NCHAR)
string SelectLastChars (const string& w) {
    string s = "";
    int n = w.length();
    for (int i = n - NCHAR; i < n; ++i) s.push_back(w[i]);
    return s;
}

bool SatisfiesProperty (const vector<string>& words) {
    int n = words.size(), i = 0;
    while (i < n) {
        string s = SelectLastChars(words[i]);
        int j = 0;
        bool found = false;
        while (not found and j < n) {
            found = s == SelectFirstChars(words[j]);
            ++j;
        }
        if (not found) return false;
        ++i;
    }
    return true;
}

int main() {
  vector<string> words(0);
  string s;
  while (cin >> s) words.push_back(s);

  if (SatisfiesProperty(words)) cout << "yes" << endl;
  else cout << "no" << endl;
}