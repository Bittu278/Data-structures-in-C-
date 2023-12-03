#include <iostream>
using namespace std;
void reverse (int arr[],int n){
    int j=0;
    int k=n-1;
    while(j<=k){
        int temp=arr[j];
        arr[j]=arr[k];
        arr[k]=temp;
        j++;
        k--;
    }
}
int main(){
    int n;
cout<<"enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"enter the elements of the array"<<endl;
for (int  i = 0; i < n; i++)
{
    cin>>arr[i];
}

reverse(arr,n);
  cout<<"reverse of array is "<<endl;
for(int i=0;i<=n-1;i++){
  cout<<arr[i]<<" ";
}
return 0;
}
