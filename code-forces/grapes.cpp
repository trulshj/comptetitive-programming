#include <iostream>

using namespace std;

/*
1114A - Got Any Grapes?

Andrew, Dmitry and Michal want x, y, z grapes each
Andrew eats only green grapes
Dmitry eats green and purple grapes
Michal eats all grapes

Given a, b, and c green, purple, and black grapes,
Can we feed all of them?
*/


int main() {
    int x, y, z;
    int a, b, c;

    cin >> x >> y >> z;
    cin >> a >> b >> c;

    if (x > a) {
        cout << "NO" << endl;
        exit(0);
    }
    a -= x;
    int ab = a + b;

    if (y > ab) {
        cout << "NO" << endl;
        exit(0);
    }
    ab -= y;

    if (z > (ab + c)) {
        cout << "NO" << endl;
        exit(0);
    }

    cout << "YES" << endl;
}