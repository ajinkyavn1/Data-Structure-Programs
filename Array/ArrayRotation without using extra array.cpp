#include<iostream>
using  namespace std;
void print(int t[],int n)
{
	cout<<" \n";
	for(int i=0;i<n;i++)
	{
		
		cout<<t[i]<<" ";
	}
}
void rotate(int t[],int n)
{
	int i,temp;
	temp=t[0];
	for(i=0;i<n-1;i++)
	{
		
		t[i]=t[i+1];
	}
	t[i]=temp;
}
void rotateByone(int t[],int n,int d)
{
	int i;
	for(i=0;i<d;i++)
		rotate(t,n);
}
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100},d,N;
	N=sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter index for rotation";
	cin>>d;
	print(arr,N);
	rotateByone(arr,N,d);
	print(arr,N);
}

