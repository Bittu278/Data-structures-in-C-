#include<iostream>//not done
using namespace std;
void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl; 
}
void sortOnetwo(int arr[],int n){
    int left = 0,right = n-1;
     while(left!=right){
        if(arr[left]<=arr[right]){
            left++;
        }
        else{
            swap(arr[left],arr[right]);
            left++;
        }
        
     }
     
}

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr[i];
    };
    sortOnetwo(arr,n);
    cout<<"sorted array is"<<endl;
    printarray(arr,n);
}