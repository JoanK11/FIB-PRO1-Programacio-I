#include <iostream>
#include <vector>
using namespace std;

struct Player {
    string name;
    double score;     // mitjana anotadora
};

struct Team {
    string tname;
    Player mvp;       // jugador millor valorat
};

typedef vector<Team> League;

League read_data() {
    // el teu codi aquí
	int n;
	cin >> n;
	League v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i].tname >> v[i].mvp.name;
		cin >> v[i].mvp.score;
	}
	return v;
}

int main() {
    // el teu codi aquí
	League v = read_data();
	char c;
	int size = v.size();
	double x;
	while (cin >> c >> x) {
		cout << "-- begin query" << endl;
		for (int i = 0; i < size; ++i) {
			if (v[i].tname[0] == c and v[i].mvp.score > x) {
				cout << v[i].mvp.name << endl;
			}
		}
		cout << "-- end query" << endl;
	}
}