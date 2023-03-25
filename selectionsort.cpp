#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cout<<"enter the n";
    cin>>n;
    int arr[n];
         cout<<"enter the number";
         //entering the value in array 
         for(int i =0;i<n;i++)
         {
            cin>>arr[i];
         }

         //aplyying sorting condition
         for(int i=0;i<n-1;i++)
         {
            for(int j=i+1;j<n;j++)
            {
                  if(arr[i]>arr[j])
                  {
                    //swap
                    int temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                    //hence swaped now print//
                  }
            }
         }
         for(int p=0;p<n;p++)
         {
            cout<<arr[p]<<endl;
         }
}