//no duplicate elements are present 
#include<iostream>
using namespace std;
int peak(int arr[],int size){
int s=0,e=size-1,mid,p;
mid=s+(e-s)/2;
    while (s<e)
    {
       if (arr[mid]<arr[mid+1])
       {
       s=mid+1;
       }
       else 
       {
         e=mid;
       }
       mid=s+(e-s)/2;
    } 
return arr[s];
}
int main()
{
    int n,m;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array in sorted order "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr[i];
    }
    int p=peak(arr,n);
    cout<<"peak is :"<<p<<endl;
return 0;
}