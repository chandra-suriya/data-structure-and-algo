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
int floor(int ar[7],int tar)
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
   cout<<(ar,tar);
    return 0;
}


//first and last position of a target in a sorted array
int bsearch(int ar[7],bool first,int tar)
{
  int fir=0,last=6,mid,ans=-1;
  while(fir<=last)
  {
      mid = fir + (last-first)/2;
      if(ar[mid]<tar)
      {
          fir=mid+1;
      }
      else if(ar[mid]>tar)
      {
          last=mid-1;
      }
      else
      {
          ans=mid;
          if(first)
          {
              last=mid-1;
          }
          else
          {
              fir=mid+1;
          }
      }
  }
  return ans;
}

int main()
{
    int ar[7]={1,2,3,3,4,5,6},tar=3;
    cout<<bsearch(ar,true,tar);
    cout<<bsearch(ar,false,tar);

    return 0;
}

    // Write C++ code here
    std::cout << "Hello world!";

    return 0;
}

