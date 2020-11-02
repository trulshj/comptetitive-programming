#include <iostream>

using namespace std;

/*
Bears Limak and Bob weigh 'a' and 'b' respectively.
Limak triples in weight every year and Bob doubles.

How many years does it take before Limak is heavier than Bob?
*/


int main() {
    int a, b;
    cin >> a >> b;

    int years = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }
    cout << years << endl;
}
