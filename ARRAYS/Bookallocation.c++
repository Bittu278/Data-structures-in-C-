//allocate books such that maximum no of pages allocated should be minimum
//allocation will be in contigues manner
// ex- a[4]={10,20,30,40} a[i] denotes no of pages of book
//to distribute books among two students 
//there will be three cases 
//1st-10 2nd-20,30,40 (max-90)
//1st-10,20 2nd-30,40 (max-70)
//1st-10,20,30 2nd-40 (max-60)
//minimum of all max wiil be the answer
//note array will be not in sorted order
#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid){
int studentCount=1;
int pagesum=0;
for (int i = 0; i < n; i++)
{
    if (pagesum+arr[i]<=mid)
    {
        pagesum+=arr[i];
    }
    else
    {
        studentCount++;
        if (studentCount>m || arr[i]>mid)
        {
           return false;
        }
        pagesum=arr[i];
        
    }
    
}
return true;
}

int bookAllocation(int arr[],int n,int m)
{
 int s=0;
 int sum=0;
  for(int i = 0; i < n; i++)
 {
    sum+=arr[i];
 }
 int e=sum;
 int mid=s+(e-s)/2;
 int ans=-1;
 while (s<=e)
 {
    if (isPossible(arr,n,m,mid))
    {
        ans=mid;
        e=mid-1;
    }
    else{
        s=mid+1;
    }
     mid=s+(e-s)/2;
 }

 return ans;

}
int main()
{  int n,m;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr[i];
       
    };
    cout<<"enter the number of students to which the books will be distributed"<<endl;
    cin>>m;
   int b=bookAllocation(arr,n,m);
   cout<<b;
return 0;
}