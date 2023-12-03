#include <iostream>
using namespace std;
void display(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
void INDdeletion(int arr[],int size,int index){
    
    for (int i =index ; i <size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    
}    
int main()
{
   int arr[100]={7,8,12,27,88,4};
   int size=6,index=3;
   display(arr,size);
   INDdeletion(arr,size,index);
   size-=1;
   display(arr,size);
 return 0;
}