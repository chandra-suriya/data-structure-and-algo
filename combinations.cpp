# include<bits/stdc++.h>
using namespace std;

void combin_to_k(int arr[],vector<int>vs, int i, int n, int tar){
   
   //base case

    if(i>n){   
        if(tar==0){
            for(auto element: vs){
            cout << element<<" ";
        }
        cout<<endl;
        }
        return ;
    }

    //recursive calls;
    if(tar>=arr[i]){
        vs.push_back(arr[i]);
        combin_to_k(arr,vs,i,n,tar-arr[i]);     //pick the current element and subtract from the target .
        vs.pop_back();
    }

    combin_to_k(arr,vs,i+1,n,tar); //dont pick element and increment the index .
}

void combin_unique_k(int ind,int tar, vector<int> &vs,vector<vector<int>> &out, vector<int> &arr){
    
    //base Case
    if(tar==0){
          out.push_back(vs);
          return; 
    }

    for(int i=ind;i<arr.size();i++){
        if(i>ind && arr[i]==arr[i-1]){
            continue;
        }
        if(tar<arr[i]) break;
        vs.push_back(arr[i]);
        combin_unique_k(i+1,tar-arr[i],vs,out,arr);
        vs.pop_back();
    }
}


void combinations_of_n(int ind, int tar, vector<int> &vs, vector<vector<int>> &out, vector<int> &arr){
               
    //base case
     if(tar==0){
          out.push_back(vs);
          return; 
    }

    for(int i=ind;i<arr.size();i++){
        vs.push_back(arr[i]);
        combinations_of_n(i+1,tar-1,vs,out,arr);
        vs.pop_back();
    }
}

int main(){
    cout<<"1.combination of array elements that sum to k"<<endl;
    cout<<"2. combination of array elements with no duplicates with sum to k"<<endl;
    cout<<"3. print the combinartions of subet"<<endl;
    cout<<"Enter the option: ";
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        {
             int arr[] = {2};
            vector<int>vs;
            combin_to_k(arr,vs,0,0,1);
        }
        break;

    case 2:
        {
            vector<int>arr={2,2,3,5};
            int tar=7;
            vector<vector<int>>out;
            vector<int>vs;
            combin_unique_k(0,tar,vs,out,arr);
            cout << "[ ";
            for (int i = 0; i < out.size(); i++) {
                cout << "[ ";
                for (int j = 0; j < out[i].size(); j++) {
                cout << out[i][j] << " ";
                }
                cout << "]";
            }
            cout << " ]";
        }
        break;

    case 3:
        {
            vector<int>arr = {1,2,3,5};
            int tar = 3;
            vector<vector<int>>out;
            vector<int>vs;
            combinations_of_n(0,tar,vs,out,arr);
            cout << "[ ";
            for (int i = 0; i < out.size(); i++) {
                cout << "[ ";
                for (int j = 0; j < out[i].size(); j++) {
                cout << out[i][j] << " ";
                }
                cout << "]";
            }
            cout << " ]";
        }   
        break; 
    
    default:
        break;
    }
   
}