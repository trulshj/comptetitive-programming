#include <iostream>

using namespace std;

int sum(int arr[]) {
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    for (int i = 0; i < arrSize; i++) {
        s += arr[i];
    }
    return s;
}

int main() {
    int d, sumTime;
    cin >> d >> sumTime;

    int minTimes[d];
    int maxTimes[d];
    int minTime, maxTime;
    for (int i = 0; i < d; i++) {
        cin >> minTime >> maxTime;
        minTimes[d] = minTime;
        maxTimes[d] = maxTime;
    }
    cout << "Min: " << sum(minTimes) << " Max: " << sum(maxTimes) << endl;

    if (sum(minTimes) > sumTime || sum(maxTimes) < sumTime) {
        cout << "NO" << endl;
        exit(0);
    }

}