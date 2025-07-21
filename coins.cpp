#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        bool possible = false;
        for (int y = 0; y <= 1; y++) {
            long long rem = n - y * k;
            if (rem >= 0 && rem % 2 == 0) {
                possible = true;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
}
