# include<bits/stdc++.h>
using namespace std;
vector<int>vec = {1,2,1};

void print_subseq_k(vector<int>vs,int n, int i, int k,int sums){
    if(i>n){
        if(sums == k){
          for(auto element: vs){
            cout << element<<" ";
        }
        cout<<"\n";  
        }
         return;
    }
   vs.push_back(vec[i]);
   sums=sums+vec[i];

   print_subseq_k(vs,n, i+1,k,sums);
   vs.pop_back();
   sums=sums-vec[i];
   print_subseq_k(vs,n, i+1,k,sums);

}

int main(){
    vector<int>vs;
     print_subseq_k(vs, vec.size()-1,0,2,0);
}