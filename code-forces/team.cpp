#include <iostream>
#include <string>

using namespace std;

int n, solution;

int main() {
    cin >> n;

    int total = 0;

    for (size_t i = 0; i < n; i++) {
        int sum = 0;
        for (size_t j = 0; j < 3; j++) {
            cin >> solution;
            sum += solution;
        }
        if (sum > 1) {
            total++;
        }
    }
    cout << total << endl;
}