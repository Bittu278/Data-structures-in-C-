//only one lement is unique rest of the elements are repeated
#include<iostream>
using namespace std;
int findunique(int arr[],int size){
   int ans=0;
   for (int i = 0; i < size; i++)
   {
     ans=ans^arr[i];
   }
   return ans;
   
}
int main()
{
    int n;
    cout<<"enter the odd size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr[i];
       
    };
    cout<<"unique element is: "<<findunique(arr,n);

return 0;
}