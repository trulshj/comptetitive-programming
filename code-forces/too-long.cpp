#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string word;

    for (int i = 0; i < n; i++) {
        word = "";
        cin >> word;
        if (word.length() > 10) {
            cout << word[0] << (word.length() - 2) << word.back() << endl;
        }
        else {
            cout << word << endl;
        }
    }
}
