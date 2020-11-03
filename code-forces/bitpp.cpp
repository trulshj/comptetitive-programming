#include <iostream>

using namespace std;

// 282A - Bit++

int main() {
    string op;
    int x = 0;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> op;
        if (op == "X++" || op == "++X") {
            x++;
        }
        else {
            x--;
        }
    }
    cout << x << endl;
}