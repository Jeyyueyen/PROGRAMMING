#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int arr[10];
	int num=0;
	
	int size;
	
	cout<<"Enter the size of array: "<<endl;
	cin>>size;
	cout<<"Enter the Elements of Array: "<<endl;
	for(int x=0; x<size; x++)
	{
		cin>>arr[x];
	}
	cout<<"What Number will be Removed ?: "<<endl;
	cin>>num;
	for(int x=0; x<5; x++)
	{
		if(arr[x]!=num)
		{
			cout<<arr[x]<<" ";
		}
	}
	getch();
}