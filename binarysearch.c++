#include <iostream>
using namespace std;
int binarysearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    mid=low + ((high-low)/2);
    while(low<=high){
       
       if(arr[mid]==element){
        return mid;
       }
       if(arr[mid]<element){
       low=mid+1;
       }
       else{
        high=mid-1;
         }
          mid=(low+high)/2;
    }
    return -1;
}
int main()
{ int arr[]={1,3,5,7,9,11,13,14,15};
int size=sizeof(arr)/sizeof(int);
int element=7;
int searchindex = binarysearch(arr,size,element);
cout<<searchindex<<endl;
 return 0;
}