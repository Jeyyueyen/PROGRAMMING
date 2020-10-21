#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int size;
	
	cout<<"Enter the size of array: "<<endl;
	cin>>size;
	int arr[size];
	int temp, x, y;
	cout<<"Enter the Elements of Array: "<<endl;
	for(int x=0; x<size; x++)
	{
		cin>>arr[x];
	}
	if(size%2==0)
	{
		for(int x=0; x<size/2; x++)
		{
			temp=arr[size-1-x];
			arr[size-1-x]=arr[x];
			arr[x]=temp;
		}
		cout<<"Reverse array: "<<endl;
		for(int x=0; x<size; x++)
		{
			cout<<arr[x]<<endl;
		}
	}
	else
	{
		for(int x=0; x<(size-1)/2; x++)
		{
			temp=arr[size-1-x];
			arr[size-1-x]=arr[x];
			arr[x]=temp;
		}
		cout<<"Reverse array: "<<endl;	
		for(int x=0; x<size; x++)
		{
			cout<<arr[x];
		}
	}
	getch();
}