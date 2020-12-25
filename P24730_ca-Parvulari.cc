#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Professor {
    string name;
    int caramels;
    int pastanagues;
};

typedef vector<Professor> VProf;

bool ordenar(Professor a, Professor b) {
    if (a.caramels == b.caramels) {
        if (a.pastanagues == b.pastanagues) {
            if (a.name.length() == b.name.length()) {
                return a.name < b.name;
            }
            return a.name.length() < b.name.length();
        }
        return a.pastanagues > b.pastanagues;
    }
    return a.caramels > b.caramels;
}

int main() {
    int casos;
    cin >> casos;
    for (int var = 0; var < casos; ++var) {
        int n;
        cin >> n;
        VProf llista(n);
        for (int i = 0; i < n; ++i) {
            cin >> llista[i].name >> llista[i].caramels;
            cin >> llista[i].pastanagues;
        }
        sort(llista.begin(), llista.end(), ordenar); 
        for (int i = 0; i < n; ++i) cout << llista[i].name << endl;
        cout << endl;
    }
}

