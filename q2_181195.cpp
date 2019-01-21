#include <iostream>
using namespace std;
int max(int arr[],int size)
{
	int max = arr[0],index=0;
	for(int i=0; i<size ; i++)
	{
		if(max < arr[i])
			index = i;
	}
	return index;
}
void ascending(int arr[],int size)
{
	int y,n =size;
	for(int i=0 ; i<n ; i++)
	{
		y = max(arr,size);
		swap(arr[y],arr[size-1]);
		size--;
	}
	for(int i=0; i<n ;i++)
		cout<<arr[i]<<" ";
}
int main()
{
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int * arr = new int[n];
	for(int i=0; i<n ;i++)
		cin>>arr[i];
	ascending(arr,n);
	
}