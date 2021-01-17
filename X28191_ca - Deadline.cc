#include <iostream>
using namespace std;

int time_lapse(int time_1, int time_2) {
    if (time_1 >= time_2) time_2 += 60;
    return time_2 - time_1;
}

int main() {
    int limit, time_1, time_2, count = 1;
    cin >> limit >> time_1 >> time_2;
    while (time_2 != -1 and limit >= 0) {
        ++count;
        limit -= time_lapse(time_1, time_2);
        time_1 = time_2;
        cin >> time_2;
    }
    if (limit >= 0) count = 0;
    cout << count << endl;
}
