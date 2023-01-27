# include<bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<string> &board, int n){

    int duprow = row;
    int dupcol = col;
    while(row>=0 && col>=0){                // cross checking
        if(board[row][col]=='Q'){
            return false;
        }
        row--;
        col--;
    }

    col = dupcol;
    row = duprow;
    while(row>=0){
        if(board[row][col]=='Q'){
            return false;
        }
        row--;
    }
    col = dupcol;
    row = duprow;
    while (row >=0 && col < n) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col++;
      }
      return true;
}


void solve(int n ,int row,vector<vector<string>> &ans,vector<string> &board){

    if(row==n){
        ans.push_back(board);
        return;
    }
    for(int col=0;col<n;col++){
        if(isSafe(row, col, board, n)){
              board[row][col] = 'Q';
              solve(n,row+1,ans,board);
              board[row][col] = '.';

        }

    }
}

int main(){
    int n;
    cin>>n;
    vector<vector<string>>ans;
    vector<string>board(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
        board[i]=s;
    }
   solve(n,0,ans,board);
    for (int i = 0; i < ans.size(); i++) {
    cout << "Arrangement " << i + 1 << "\n";
    for (int j = 0; j < ans[0].size(); j++) {
      cout << ans[i][j];
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}