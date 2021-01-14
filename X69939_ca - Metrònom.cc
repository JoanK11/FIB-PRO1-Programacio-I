#include <iostream>
using namespace std;

int time_lapse(int time_1, int time_2) {
    if (time_1 >= time_2) time_2 += 60;
    return time_2 - time_1;
}

int main() {
    int last, now;
    cin >> last >> now;
    int diff = time_lapse(last, now);
    last = now;
    cin >> now;
    while (now != -1 and time_lapse(last, now) == diff) {
        last = now;
        cin >> now;
    }
    if (now != -1) diff = 0;
    cout << diff << endl;
}