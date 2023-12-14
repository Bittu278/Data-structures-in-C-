#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[],int t){
  int i=0;
  int j=0,k=0;
  while (i<n && j<m)
  {
    if (arr1[i]<arr2[j])
    {
        arr3[k]=arr1[i];
       i++;
        k++;
    }
    else if (arr1[i]>arr2[j])
    {
        arr3[k]=arr2[j];
       j++;
        k++;
    }
    
  }
  while(i<n)
  {
    arr3[k]=arr1[i];
   i++;
   k++;
  }
  while(j<m) {
    arr3[k]=arr2[j];
   j++;
    k++;
  }
}
void printArray(int arr3[],int size ){
   for (int i = 0; i < size; i++)
   {
     cout<<arr3[i]<<" ";
   }
}
int main()
{ int n,m;
    cout<<"enter the size of 1st array"<<endl;
    cin>>n;
    int arr1[n];
    cout<<"enter the elements of 1st array in sorted order"<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter the size of 2nd array"<<endl;
    cin>>m;
    int arr2[m];
    cout<<"enter the elements of 2nd array in sorted order"<<endl;
     for (int i =0; i <m; i++)
    {
        cin>>arr2[i];
    };
    int t=n+m;
    int arr3[t];
    merge(arr1,n,arr2,m,arr3,t);
    cout<<"array after merging"<<endl;
    printArray(arr3,t);
return 0;
}