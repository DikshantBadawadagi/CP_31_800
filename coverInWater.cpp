#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        int dot = 0;
        bool flag = false;
        for(auto it : s){
            if(it == '.'){cnt++;dot++;}
            else cnt=0;
            if(cnt == 3){
                cout<<2<<endl;
                flag = true;
                break;
            }
        }
        if(flag) continue;
        cout<<dot<<endl;
    }
}