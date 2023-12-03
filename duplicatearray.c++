#include<iostream>
using namespace std;
int main(){
int n,ans=0;
cout<<"enter the size of array"<<endl;
cin>>n;
int arr[n],temp;
cout<<"enter the elements of the array"<<endl;

for (int  i = 0; i < n; i++)
{
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    ans=ans^arr[i];
}
for(int i=1;i<n;i++){
    ans=ans^i;
}
cout<<"duplicate element is "<<ans<<endl;

for(int j=0;j<n;j++){
    for(int k=j+1;k<n;k++){
             if(arr[j]>arr[k])
                  {
                       temp=arr[j];
                       arr[j]=arr[k];
                        arr[k]=temp;
                  }
        }
}

int tem[n],l=0;
for(int m=0;m<n-1;m++){
            if(arr[m]!=arr[m+1]){
                tem[l]=arr[m];
                       l++;   
            }
}
tem[l]=arr[n-1];
 cout<<"array after removing duplicate element array is"<<endl;
for (int i = 0; i < n; i++)
{
   cout<<tem[i]<<" ";
}

return 0;
}
