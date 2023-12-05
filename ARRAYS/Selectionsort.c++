#include<iostream>
using namespace std;
void selectionSort(int arr[],int size)
{
    for (int i = 0;i<size-1;i++)
    {    int min_index=i;
      for (int j = i+1; j < size; j++)
      {  
        if (arr[j]<arr[min_index])
        {
            min_index=j;
        }
      }
    swap(arr[min_index],arr[i]); 
    }
}
void printArray(int arr[],int size ){
   for (int i = 0; i < size; i++)
   {
     cout<<arr[i]<<" ";
   }
}
int main()
{  int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr[i];
    };
    selectionSort(arr,n);
    cout<<"sorted array: "<<endl;
    printArray(arr,n);
return 0;
}
//use when size of is small
//Space complexity - O(1) as no extra array is being created
// Time cpmplexity - best case-O(n^2)
//                   wost case-O(n^2)
//                   avverage case-O(n^2)