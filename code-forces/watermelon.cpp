#include <iostream>
#include <string>

using namespace std;

int main() {
    int weight;
    cin >> weight;

    if (weight % 2 == 0 && weight > 2)
    {
        cout << "YES"<< endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}