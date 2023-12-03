#include<iostream>
using namespace std;
int search(int arr[],int size,int key){
int s=0,e=size-1,mid;
mid=s+(e-s)/2;
    while (s<e)
    {
       if (arr[mid]<key && arr[e]<=key)
       {
       s=mid+1;
       }
       else 
       {
         e=mid;
       }
       mid=s+(e-s)/2;
    } 
 if (arr[mid]==key)
 {
    return 1;
 }
 else return -1;
 
}
int main()
{
    int n,m,key;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array in rotated sorted order "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key to be find "<<endl;
    cin>>key;
    int p=search(arr,n,key);
    if (p)
    {
        cout<<"element found"<<endl;
    }
    else cout<<"element not foound ";
return 0;
}
