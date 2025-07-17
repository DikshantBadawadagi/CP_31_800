#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long ans = a+b+c;
        if(ans%2ll == 0)cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
}