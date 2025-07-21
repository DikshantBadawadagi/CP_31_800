#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases
    while (t--) {
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int maxi = INT_MIN;
        int ans=0;
        for(auto it : nums){
            if(it == 0)ans++;
            else ans =0;
            maxi = max(maxi, ans);
        }
        cout << maxi << endl;
    }

}