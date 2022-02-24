# include <iostream>
using namespace std;

//bubble sort
   


//2.  selection sort

int main() {
    // Write C++ code here
    int ar[5]={1,5,4,2,3},j;
    for(int i=0;i<5;i++)
    {
        int min=10,temp,pi;
        for(j=i;j<5;j++)
        {
            if(ar[j]<min)
            {
                min=ar[j];
                pi=j;
            }
        }
        if(pi!=i){
            temp=ar[i];
            ar[i]=min;
            ar[pi]=temp;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<ar[i]<<endl;
    }

    return 0;
}

// Insertion sort

int main() {
    // Write C++ code here
    int ar[5]={1,5,4,2,3},temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            if(ar[j]<ar[j-1])
            {
                temp=ar[j];
                ar[j]=ar[j-1];
                ar[j-1]=temp;
            }
            else {
                break;
            }
    }
    }
    for(int i=0;i<5;i++)
    {
        cout<<ar[i]<<endl;
    }

    // cycle sort

    int main() {
    int arr[5]={5,3,2,4,1};
    int i=0;
    while(i<5)
    {
        int check = arr[i]-1,temp;
        if(arr[i]!=arr[check])
        {
            temp=arr[i];
            arr[i]=arr[check];
            arr[check]=temp;
        }
        else{
            i++;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}