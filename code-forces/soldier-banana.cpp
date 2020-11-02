#include <iostream>

using namespace std;

/* 
A soldier wants to buy 'w' bananas.
The i'th banana costs i * k
He has 'n' money

How much money does he have to borrow?
*/

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int sum = 0;
    for (int i = 1; i <= w; i++) {
        sum += i * k;
    }
    sum -= n;

    if (sum < 0) {
        sum = 0;
    }

    cout << sum << endl;
}
