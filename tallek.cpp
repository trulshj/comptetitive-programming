#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> seen;

    int curr;
    int lowest = 1000000000;

    for (int i = 0; i < n; i++) {
        cin >> curr;
        
        bool found = find(seen.begin(), seen.end(), curr) != seen.end();
        if (!found) {
            if (curr < lowest) {
                lowest = curr;
            } 
        }
    
    }
    cout << lowest << endl;
}