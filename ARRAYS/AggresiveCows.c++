#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPossible(int stalls[],int n,int k,int mid){
int cowcount=1;
int lastPos=stalls[0];
for (int i = 0; i < n; i++)
{
    if (stalls[i]-lastPos>=mid)
    {
        cowcount++;
        if (cowcount==k)
        {
            return true;
        }
        lastPos=stalls[i];
    }
    
}
return false;
}
int aggresiveCows(int stalls[],int n,int k){
    sort(stalls,stalls+(n-1));
    int s=0;
    int maxi=-1;
    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if (isPossible(stalls,n,k,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    

}
int main()
{  int n,k;
    cout<<"enter the size of stalls"<<endl;
    cin>>n;
    int stalls[n];
    cout<<"enter the elements of stalls "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>stalls[i];
       
    };
    cout<<"enter the number of cows"<<endl;
    cin>>k;
   int b=aggresiveCows(stalls,n,k);
   cout<<b;
return 0;
}