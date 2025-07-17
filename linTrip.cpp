#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr;
        arr.push_back(0);
        for(int i = 0;i < n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }
        arr.push_back(x+(x - arr.back()));
        int ans = 0;
        for(int i = 1;i < arr.size();i++){
            ans=max(ans,arr[i] - arr[i-1]);
        }
        // for(auto it : arr)cout<<it<<" ";
        // cout<<endl;
        cout<<ans<<endl;
    }
    
}