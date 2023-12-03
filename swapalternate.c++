#include<iostream>
using namespace std;
 void swapalter(int arr[],int size){
  
    for (int i = 0; i < size; i+=2)
    {  if((i+1)<size){
       swap(arr[i],arr[i+1]);
    }
    }
}
 void printarray(int arr[],int size){

    for (int i = 0; i < size; i+=1)
    {
        cout<<arr[i]<<" ";
    } 
 }
int main()
{   int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr[i];
       
    };
    swapalter(arr,n);
    printarray(arr,n);
    
return 0;
}