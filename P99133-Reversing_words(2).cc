#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Llegeixo el nombre d'elements que tindrà el vector
    int n;
    cin >> n;
    // Declaro el vector i llegeixo el seu contingut ja invertit
    vector<string> vector(n);
    for (int i = n - 1; i >= 0; --i)
        cin >> vector[i];
    // Amb un for declaro el nombre de repeticions que hauré de fer
    // Amb l'altre giro el contingut del vector dins d'una string
    for (int i = 0; i < n; ++i) {
        string word = vector[i];
        for (int j = word.length() - 1; j >= 0; --j)
            cout << word[j];
        cout << endl;
    }
}
