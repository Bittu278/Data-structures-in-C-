#include <iostream>
using namespace std;
void bubbleSort(int arr[],int size){
  for(int i=0;i<size-1;i++){
    //for round 1 to n-1
    bool flag=false;//array is not sorted yet
      for(int j=0;j<size-1-i;j++){ 
          if(arr[j]>arr[j+1]){
             swap(arr[j],arr[j+1]);
             flag=true;
            }
      }
      if(flag==false)
       {//already sorted
        break;
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
{  int n;
cout<<"enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"enter the elements of the array"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
bubbleSort(arr,n);
cout<<"array after sorting is"<<endl;
printArray(arr,n);
return 0;
}
//It is a stable algorithm
// maximum number of swaps=n*(n-1)/2
//Space complexity - O(1) as no extra array is being created
// Time cpmplexity - best case-O(n)
//                   wost case-O(n^2)
//                   avverage case-O(n^2)