# include<bits/stdc++.h>
using namespace std;
vector<int>vec = {1,2,1};
void print_subseq(vector<int>vs,int n, int i){
    if(i>n){
        for(auto element: vs){
            cout << element<<" ";
        }
        cout<<"\n";
        return  ;
    }
    vs.push_back(vec[i]);
    print_subseq(vs,n,i+1);
    vs.pop_back();
    print_subseq(vs,n,i+1);
}

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

bool print_subseq_one(vector<int>vs, int n, int i, int k, int sums){
    if(i>n){
         if(sums == k){
          for(auto element: vs){
            cout << element<<" ";
        }
        return true;
        }else {
            return false;
        }
    }
    vs.push_back(vec[i]);
    sums=sums+vec[i];

    if(print_subseq_one(vs,n, i+1,k,sums)==true){
            return true;
    }
    vs.pop_back();
    sums=sums-vec[i];
    if(print_subseq_one(vs,n,i+1,k,sums)==true){
        return true;
    }else{
        return false;
    }
}

int count_subseq_k(int n, int i, int k, int sums){
    if(i>n){
        if(sums==k){
            return 1;
        }else{
            return 0;
        }
    }
    sums+=vec[i];
    int first = count_subseq_k(n,i+1,k,sums); //first half
    sums=sums-vec[i];
    int second = count_subseq_k(n,i+1,k,sums); //second half
    return first+second;
}

bool check_valid_subseq(int n, int i, int k, int sums){
    if(i==n){
        if(sums==k){
            return true;
        }else{
            return false;
        }
    }
    sums=sums+vec[i];
    if(check_valid_subseq(n,i+1,k,sums)){
        return true;
    }
    sums=sums-vec[i];
    if(check_valid_subseq(n,i+1,k,sums)){
        return true;
    }
    return false;
    
}

int main(){
    vector<int>vs;
    int n;
    cout<<"1.print subsequence"<<endl;
    cout<<"2.print the subset whose sum is equal to k"<<endl;
    cout<<"3.Print the first value of subset that"<<endl;
    cout<<"4.Count the number of subset whose sum values is equal to k"<<endl;
    cout<<"5.check if the subset is there for sum value"<<endl;
    cin >>n;
    switch (n)
    {
    case 1:
        {
             print_subseq(vs, vec.size()-1,0);
        }
        break;
    case 2:
        {
           print_subseq_k(vs, vec.size()-1,0,2,0);
        }
        break;
    case 3:
         {
            print_subseq_one(vs, vec.size()-1,0,2,0);
         }
         break;
    case 4:
        {
           cout<<count_subseq_k(vec.size()-1,0,4,0);
        } 

    case 5:
        {
            if(check_valid_subseq(vec.size(),0,4,0)){
                cout<<"It is has subset of the value k";
            }else{
                cout<<"it is not";
            }
        }            
    default:
        break;
    }
    
     
}