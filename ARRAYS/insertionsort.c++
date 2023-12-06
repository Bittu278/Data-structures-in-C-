#include <iostream>
using namespace std;
void selectionSort(int arr[],int size){
  for(int i=1;i<size;i++){
    int temp=arr[i],j;
      for ( j = i-1; j >=0;  j--)
      {   
        if (arr[j]>temp)
        {
            arr[j+1]=arr[j];
        }
        else{
          
          break;
        }
      }
      arr[j+1]=temp;
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
selectionSort(arr,n);
cout<<"array after sorting is"<<endl;
printArray(arr,n);
return 0;
}
//it is adaptable 
//It is a stable algorithm
//used for small size
// maximum number of swaps=n*(n-1)/2
//Space complexity - O(1) as no extra array is being created
// Time cpmplexity - best case-O(n)
//                   wost case-O(n^2)
//                   avverage case-O(n^2)