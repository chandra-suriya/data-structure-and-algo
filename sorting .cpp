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