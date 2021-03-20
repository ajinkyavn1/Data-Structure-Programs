#include<iostream>
using namespace std;

int deleteeleByLocation(int arr[],int *n,int loc)
{
    for(int i=loc;i<*n;i++)
    {
        arr[i]=arr[i+1];
    }
   return  *n-1;

}
int deleteByelement(int arr[],int *n,int ele)
{
   int loc;
    for(int i=0;i<*n;i++)
    {
        if(arr[i]==ele)
        {
            loc=i;
            break;
        }
    }
    *n=*n-1;
    for(int i=loc;i<*n;i++)
    {
        arr[i]=arr[i+1];
    }
   return  *n;

}
int insertAtLocation(int arr[],int n,int ele,int loc)
{
    
    n=n+1;
    for(int i=n-1;i>loc-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[loc]=ele;
    return n;
}

int searchLinerar(int arr[],int n,int ele)
{
  for(int i=0;i<n;i++)
  {
      if(arr[i]==ele)
      {
        
          return 1;
      }
  }  
  return -1;
}
void  IO(int arr[],int n,int op)
{
    for(int i=0;i<n;i++)
    {
       if(op==1)
       cin>>arr[i];
       else
       cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    IO(arr,n,1);
    int ele,loc;
    cin>>ele;
    //  n=deleteByelement(arr,&n,loc);
    //  n=deleteeleByLocation(arr,&n,loc);
   // n=insertAtLocation(arr,n,ele,loc);
     //IO(arr,n,2);
     cout<<searchLinerar(arr,n,ele);

    return 0;
}