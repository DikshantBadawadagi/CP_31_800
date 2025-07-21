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
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i] = n - nums[i] + 1;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}