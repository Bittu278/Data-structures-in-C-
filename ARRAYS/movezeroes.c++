#include<iostream>
using namespace std;
void moveZeroes(int arr[],int n){
    int i=0;
 for (int j = 0; j < n; j++)
 {
    if(arr[j]!=0){
        swap(arr[j],arr[i]);
        i++;
    }
 }
 
}
void printArray(int arr[],int size ){
   for (int i = 0; i < size; i++)
   {
     cout<<arr[i]<<" ";
   }
}
int main()
{ int n,m;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array in sorted order"<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr[i];
    }
    moveZeroes(arr,n);
    printArray(arr,n);
return 0;
}