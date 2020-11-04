#include<iostream>
using namespace std;
 
   main(){
   
   int arr[20],even[20],x,z=0,no;

   cout<<"How Size of Array: ";
   cin>>no;

   cout<<"Enter any "<<no<<" elements in Array: "<<endl;
   for(x=0; x<no;x++)
   {

   cin>>arr[x];

   }
   for(x=0; x<no;x++)
   {

   if(arr[x]%2==0)

  {
    even[z]=arr[x];
    z++;
  }
  }
  cout<<"\nEven Elements: ";
  for(x=0; x<z ;x++)
   {

    cout<<even[x]<<"  ";
    
   }
 return 0;
  }