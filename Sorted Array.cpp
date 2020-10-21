#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int size, num;
	cout<<"Enter  Size of the Array: "<<endl;
	cin>>size;
	
	int arr[size];
	int x, y;
	
	cout<<"Enter the array of element: "<<endl;
	
	for(int x=0; x<size; x++)
	{
		cin>>arr[x];
	}
	
	
	for(int x=0; x<size; x++)
	{
		for(int y=0; y<size; y++)
		{
			if(arr[x]<arr[y])
			{
				num=arr[x];
				arr[x]=arr[y];
				arr[y]=num;
			}
		}
	}
	cout<<endl<<endl;

	cout<<"Ascending Order: ";
	for(int x=0; x<size; x++)
	{
		cout<<" "<<arr[x];
	}
	cout<<endl<<endl;
	for(int x=0; x<size; x++)
	{
		for(int y=0; y<size; y++)
		{
			if(arr[x]>arr[y])
			{
				num=arr[x];
				arr[x]=arr[y];
				arr[y]=num;
			}
		}
	}
	cout<<"Descending Order: ";
	for(int x=0; x<size; x++)
	{
		cout<<" "<<arr[x];
	}
	getch();
}