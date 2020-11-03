#include <iostream>

using namespace std;

// 50A - Domino Piling

int main() {
    int m, n;
    cin >> m >> n;
    m *= n;

    cout << int(floor(m / 2)) << endl;
}