#include <iostream>
#include <vector>
using namespace std;

typedef vector <vector <int> > Room;

// Pre: n, m integers greater than 0
// Post: it returns a valid n*m Room
Room read_room(int n, int m) {
    Room v(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> v[i][j];
    }
    return v;
}

// Pre: room is a valid Room
// Post: it returns the value of those objects that are not monitored by any of the security cameras in room, no matter the final value of room
int non_monitored_objects(const Room& room) {
    int n = room.size(), m = room[0].size();
    int jmin = m, total = 0, i = 0;
    while (i < n and jmin > 0) {
        int j = 0;
        while (j < jmin and room[i][j] != -1) total += room[i][j], ++j;
        if (j < jmin) jmin = j;    
        ++i;
    }
    return total;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        Room room = read_room(n, m);
        cout << non_monitored_objects(room) << endl;
    }
}