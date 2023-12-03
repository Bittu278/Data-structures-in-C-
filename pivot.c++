//finding pivot in an rotated sorted(increasing) array using binary search
//if array is 7 9 1 2 3 then pivot will be 1
// another example 8 10 13 14 5 7 //rotation of sorted array
// logic : there will be two disjoint increasing lines
//arr[0] willl be the comparing factor 
#include<iostream>
using namespace std;
int pivot(int arr[],int size){
int s=0,e=size-1,mid,p;
mid=s+(e-s)/2;
    while (s<e)
    {
       if (arr[mid]>=arr[0])
       {
       s=mid+1;
       }
       else 
       {
         e=mid;
       }
       mid=s+(e-s)/2;
    } 
return arr[s];//return [e] both are correct
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
    int p=pivot(arr,n);
    cout<<"pivot is :"<<p<<endl;
return 0;
}
