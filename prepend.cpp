#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int res=0;
        for(int i= 0;i<n/2;i++){
            if(s[i] != s[n-i-1]){
                res++;
            }else{
                break;
            }
        }
        cout<<n - 2*res<<endl;
    }
}