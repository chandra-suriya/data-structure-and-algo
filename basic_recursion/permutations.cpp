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

bool check_palindrome(string &a, int fir, int last){
    while(fir<=last){
        if(a[fir]!=a[last]){
             return false;
        }
        fir++;
        last--;
    }
    return true;
};
void all_palindromic_substring(string s, int ind, vector<string> &vs1, vector<vector<string>> &ans1){

     //base case check if the index is euqal to the string length
     if(ind == s.size()){
        ans1.push_back(vs1);
        return;
     }
    // for iterating the next character  from the index character after return from the particular recursion
     for(int i=ind; i<s.size();i++){
           
           // check if that particular substring is palindrome
           if(check_palindrome(s, ind,i)){
                vs1.push_back(s.substr(ind,i-ind+1));
                all_palindromic_substring(s,i+1,vs1,ans1);
                vs1.pop_back();
           }

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


    string s = "aabb";
    vector<string>vs1;
    vector<vector<string>>ans1;
    all_palindromic_substring(s,0,vs1, ans1);
     cout << "[ ";
            for (int i = 0; i < ans1.size(); i++) {
                cout << "[ ";
                for (int j = 0; j < ans1[i].size(); j++) {
                cout << ans1[i][j] << " ";
                }
                cout << "]";
            }
            cout << " ]";

}