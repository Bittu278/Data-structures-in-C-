#include<iostream>
using namespace std;
int findduplicate(int arr[],int size){
   int ans=0;
   for (int i = 0; i < size; i++)
   {
     ans=ans^arr[i];
   }
   for (int i = 1; i < size; i++)
   {
     ans=ans^i;
   }
   
   return ans;
   
}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr[i];
       
    };
    cout<<"duplicate element is: "<<findduplicate(arr,n);

return 0;
}