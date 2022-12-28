# include<bits/stdc++.h>
using namespace std;

void one_to_n(string s, int n, int i){
   if(i>n){
    return ;
   }
   cout<<s[i]<<endl; //forward the value
   one_to_n(s,n,i+1);
   cout<<s[i]<<endl; //reverse the value

}

int factorial(int sum, int tot){  
   if(sum>tot){
    return 1;
   }
   return sum * factorial(sum+1,tot);
    
}

void reverse_array(int arr[], int n, int i ){
    if(i>=n/2){
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    reverse_array(arr,n,i+1);
}
int fibnooaci(int n){
    if(n<=1) return n;
    int fir = fibnooaci(n-1);
    int las = fibnooaci(n-2);
    return fir+las;
}

int main(){
    cout<<"1. print string character in basic recursion"<<endl;
    cout<< "2. factorial of numbers"<< endl;
    cout<<"3.reverse the array using recursion"<<endl;
    cout<<"4. fibnocci of the number"<<endl;
    cout<<"enter the value";
    string s;
    int val;
    int n;
    cin>>val;
    switch(val){
        case 1:
        {
            cout<<"enter the string";
            cin>>s;
            one_to_n(s,s.length()-1,0);
        }
            break;
        case 2:
        {
            cout<<"enter the number";
            cin>>n;
            cout<<factorial(1,n);
        }
            break;
        case 3:
        {
           cout<<"enter the array size"<<endl;
           cin>>n;
           cout<<"enter the array elements"<<endl;
           int arr[n-1];
           for(int i=0;i<n;i++){
               cin>>arr[i];
           }  
           reverse_array(arr, n,0);
           for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
           }
        }
           break;
        case 4:
        {
           cout<<"enter the value"<<endl;
           cin >>n;
           cout<<fibnooaci(n)<<endl;
        }

    }
    return 0;
}