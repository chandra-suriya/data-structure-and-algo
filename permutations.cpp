# include<bits/stdc++.h>
using namespace std;


void print_permutation(vector<int> &arr, int ind,int n, vector<vector<int>> &ans){
   
   // base case
   if(ind==n){
         ans.push_back(arr);
         return ;
   }
   for(int i=ind;i<n;i++){
    
    swap(arr[ind],arr[i]);
    print_permutation(arr,ind+1,n,ans);
    swap(arr[ind],arr[i]);

   }

}

int main(){
    vector<int>arr={1,2,3};
    vector<vector<int>>ans;
    print_permutation(arr,0,arr.size(),ans);
     cout << "[ ";
            for (int i = 0; i < ans.size(); i++) {
                cout << "[ ";
                for (int j = 0; j < ans[i].size(); j++) {
                cout << ans[i][j] << " ";
                }
                cout << "]";
            }
            cout << " ]";
}