//using binary search find the first and last position of the given element in an sorted array 
//array may contain duplicate elements

#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int key)
{
int s=0,e=size-1;
int mid=s+(e-s)/2;
int ans=-1;
while (s<=e)
{
    if (arr[mid]==key)
    {
        ans=mid;
        e=mid-1;
    }
    else if (arr[mid]>key)
    {
        e=mid-1;
    }
    else if (arr[mid]<key)
    {
        s=mid+1;
    }
    
    mid=s+(e-s)/2;
}
return ans;
}

int lastOcc(int arr[],int size,int key)
{
   int mid=firstOcc(arr,size,key);
   int ans;
   
    while (arr[mid]==key)
        {
             mid++;
        }
    ans=--mid;
return ans;
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
    };
    cout<<"enter the element to be found"<<endl;
    cin>>m;
    int ind1=firstOcc(arr,n,m);
    int ind2=lastOcc(arr,n,m);
    cout<<"first occurence "<<ind1<<endl;
    cout<<"last occurence "<<ind2<<endl;
    
return 0;
}