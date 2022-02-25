#include <iostream>
using namespace std;


//1.binary search
int ceiling(int ar[7],int tar)
{
   int start=0;
   int end=6;
   while(start<=end)
   {
       int mid = start+(end-start)/2;
       if(ar[mid]==tar)
       {
           return mid;
       }
       else if(ar[mid]<tar)
       {
           start=mid+1;
       }
       else if(ar[mid]>tar)
       {
           end=mid-1;
       }
   }
   return -1;
 }

int main()
{
   int ar[7]={2,3,5,9,14,16,18},tar=14;
   cout<<ceiling(ar,tar);
    return 0;
}

//2. find the ceiling of a number in a sorted array(first element >=target)
int ceiling(int ar[7],int tar)
{
   int start=0;
   int end=6;
   //find the ceiling of the number
   while(start<=end)
   {
       int mid = start+(end-start)/2;
       if(ar[mid]==tar)
       {
           return mid;
       }
       else if(ar[mid]<tar)
       {
           start=mid+1;
       }
       else if(ar[mid]>tar)
       {
           end=mid-1;
       }
   }
   return start;
 }

int main()
{
   int ar[7]={2,3,5,9,14,16,18},tar=14;
   cout<<ceiling(ar,tar);
    return 0;
}

//3. find the floor of a number in a sorted array
int ceiling(int ar[7],int tar)
{
   int start=0;
   int end=6;
   //find the ceiling of the number
   while(start<=end)
   {
       int mid = start+(end-start)/2;
       if(ar[mid]==tar)
       {
           return mid;
       }
       else if(ar[mid]<tar)
       {
           start=mid+1;
       }
       else if(ar[mid]>tar)
       {
           end=mid-1;
       }
   }
   return end;
 }

int main()
{
   int ar[7]={2,3,5,9,14,16,18},tar=14;
   cout<<ceiling(ar,tar);
    return 0;
}
