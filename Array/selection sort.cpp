
#include <iostream>

using namespace std;
void Sort(int arr[],int n)
{
    int min,i,j;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int main()
{
  int n,i;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  
  Sort(arr,n);
   

     for(i=0;i<n;i++)
    {
        cout<<endl<<arr[i]<<" ";
    }
    return 0;
}
