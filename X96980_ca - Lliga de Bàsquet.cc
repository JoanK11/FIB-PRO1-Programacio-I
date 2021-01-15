#include <iostream>
#include <vector>
using namespace std;

struct Game {
    string home;           // home team
    int shome;             // home team's score
    string visitor;        // visitor team
    int svisitor;        // visitor team's score
}; 

int scoring_ability(const vector<Game>& v, const string& team) {
    int total = 0, n = v.size();
    for (int i = 0; i < n; ++i) {
        if (v[i].home == team) total += v[i].shome;
        else if (v[i].visitor == team) total -= v[i].svisitor;
    }
    return total;
}

vector<Game> read_games(int n) {
    vector<Game> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].home >> v[i].shome;
        cin >> v[i].visitor >> v[i].svisitor;
    }
    return v;
}

int main() {
    int n;
    cin >> n;
    vector<Game> v = read_games(n);
    string team;
    while (cin >> team) {
        cout << team << ' ' << scoring_ability(v, team) << endl;
    }
}