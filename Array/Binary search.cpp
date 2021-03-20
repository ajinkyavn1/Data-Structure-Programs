#include<iostream>
using namespace std;
int  Binarysearch(int arr[],int n,int key)
{
    int LB=0,UB=n-1;
    while(LB<=UB)
    {
        int mid=(LB+UB)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>UB)
        {
            UB=mid-1;
           
        }
        else
             LB=mid+1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
     int key;
     cin>>key; 
   cout<< Binarysearch(arr,n,key);
    
}