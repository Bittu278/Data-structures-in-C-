//given that both arrays are sorted in increasing order
//->one element is mapped with only one element
#include<iostream>
#include<limits.h>
using namespace std;

int arrayintersection(int arr1[],int size1,int arr2[],int size2){
  int i=0,j=0,n=size1,m=size2; 
  while(i<n && j<m){
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i];
            i++;
            j++;
            return 1;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else j++;
    }
    return -1;
}

int main()
{
    int n,m;
    cout<<"enter the size of 1st array"<<endl;
    cin>>n;
    int arr1[n];
    cout<<"enter the elements of array "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr1[i];
       
    };
    cout<<endl;
    cout<<"enter the size of 2nd array"<<endl;
    cin>>n;
    int arr2[n];
    cout<<"enter the elements of array "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr2[i];
       
    };
return 0;
}