//two pointer approach in single array
#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl; 
}
void sortOne(int arr[],int n){
    int left = 0,right = n-1;
     while(left<right){
        while(arr[left]==0 && left<=right){
            left++;
        }
        while(arr[right]==1 && left<=right){
           right--;
        } 
          
      swap(arr[left],arr[right]);
      left++;
      right--;    
     }
}
int main(){
  //  int arr[8]={1,1,0,0,0,0,1,0};
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr[i];
    };
    sortOne(arr,n);
    cout<<"sorted array is"<<endl;
    printarray(arr,n);
}