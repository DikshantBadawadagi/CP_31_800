#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;  // number of test cases
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int xor_sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            xor_sum ^= a[i];
        }

        if (n % 2 == 0) {
            // if n is even, xor_sum must be 0 for a solution
            if (xor_sum == 0) {
                cout << 0 << endl;
            } else {
                cout << -1 << endl;
            }
        } else {
            // if n is odd, x = xor_sum
            cout << xor_sum << endl;
        }
    }
    return 0;
}
