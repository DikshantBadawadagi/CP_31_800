#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0, negCount = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
            if (a[i] == -1)
                negCount++;
        }

        int operations = 0;

        // Step 1: Ensure sum >= 0
        while (sum < 0) {
            sum += 2;     // flipping -1 to 1 increases sum by 2
            negCount--;   // one less -1
            operations++; // one operation done
        }

        // Step 2: Ensure product is 1
        // Product is 1 if the number of -1's is even
        if (negCount % 2 == 1) {
            operations++; // flip one more -1 to 1 to make count even
        }

        cout << operations << '\n';
    }

    return 0;
}
