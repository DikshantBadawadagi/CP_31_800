#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i = 0; i < n; i++){
            cin>>nums[i];
        }
        
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i = 1; i < n; i++){
            if(nums[i] >= nums[i-1]){
                ans.push_back(nums[i]);
            }else{
                ans.push_back(nums[i]);
                ans.push_back(nums[i]);
            }
        }   
        cout<<ans.size()<<endl;
        for(auto it : ans){
            cout<<it<<" ";
        }
         cout<<endl;        
    }
}