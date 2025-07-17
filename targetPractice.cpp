#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> board = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        vector<string>grid;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                char x;
                cin>>x;
                if(x== 'X')sum+=board[i][j];
            }
        }
        cout<<sum<<endl;
    }
}