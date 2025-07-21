#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read number of test cases
    while (t--) {
        int x, k;
        cin >> x >> k;  // Read x and k
        if (x % k != 0) {
            cout << 1 << endl;
            cout << x << endl;
        } else {
            cout << 2 << endl;
            cout << 1 << " " << x - 1 << endl;
        }
    }
    return 0;
}
