#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string curr = x;
        int ans = -1;

        for(int i = 0; i < 6; i++) {
            if (curr.find(s) != string::npos) {
                ans = i;
                break;
            }
            curr += curr; // double the string, like in Python
        }

        cout << ans << endl;
    }
}
