#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int PREFIX_LEN = 3;

// The function reads in a vector a sequence 
// of prefixes till the word "FI"
vector<string> load_prefixes(){
   vector<string> pref;
   string s;
   cin >> s;
   while (s != "FI") {
      pref.push_back(s);
      cin >> s;
   }
   return pref;
}

// This function reads n words and returns a vector with the prefix of each word
vector<string> read_words(int n){
   vector<string> wpref(n);
    string s;
    for (int i = 0; i < n; ++i){
       cin >> s;
       wpref[i] = "";
       for (int k = 0; k < PREFIX_LEN; ++k) 
          wpref[i].push_back(s[k]);
    }
    return wpref;
}

/// ADD YOU PROCEDURES/FUNCTIONS HERE
bool posicio(const vector<string>& prefixes, const vector<string> casos, int& pos) {
    int pref_size = prefixes.size();
    for (int i = 0; i < pref_size; ++i) {
        if (prefixes[i] == casos[pos]) {
            pos = i;
            return true;
        }
    }
    return false;
}

int cerca(const vector<string>& prefixes, const vector<string>& casos) {
    int casos_size = casos.size(), pref_size = prefixes.size();
    vector<int> pref_count(pref_size, 0);
    int aux, max = 0;
    for (int i = 0; i < casos_size; ++i) {
        aux = i;
        if (posicio(prefixes, casos, aux)) ++pref_count[aux];
    }
    for (int i = 0; i < pref_size; ++i) {
        if (pref_count[i] > max) max = pref_count[i];
    }
    return max;
}

int main() {
   vector<string> prefixes = load_prefixes();

   // ADD YOUR CODE HERE
   int n;
   while (cin >> n) {
       vector<string> v = read_words(n);   
       cout << cerca(prefixes, v) << endl;
   }
}