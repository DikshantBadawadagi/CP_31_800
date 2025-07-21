#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> prefix2s(n, 0);
        int total2s = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == 2)
                total2s++;
        }

        // If total number of 2s is odd, not possible
        if (total2s % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        int half2s = total2s / 2;
        int current2s = 0;
        int answer = -1;

        for (int k = 0; k < n - 1; ++k) {  // k ranges from 0 to n-2
            if (a[k] == 2)
                current2s++;

            if (current2s == half2s) {
                answer = k + 1;  // +1 for 1-based index
                break;
            }
        }

        cout << answer << endl;
    }

    return 0;
}
o