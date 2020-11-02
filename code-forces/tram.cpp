#include <iostream>

using namespace std;

/*
Linear Kingdom has 'n' tram-stops that go in order
On each stop 'a' people leave the tram, and 'b' people board

What is the minimum capacity the train needs to acommodate everyone?
*/

int main() {
    int n, a, b;
    cin >> n;

    int curr = 0;
    int max = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        curr -= a;
        curr += b;
        if (curr > max) {
            max = curr;
        }
    }
    cout << max << endl;
}