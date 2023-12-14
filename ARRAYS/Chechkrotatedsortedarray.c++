//duplicates can be present in the array
#include<iostream>
using namespace std;
bool chechkRotatedsorted(int arr[],int n){
  int count=0;
    for ( int i = 0; i < n; i++)
    {
        if (arr[i]>arr[i+1])
        {
            count++;
        }
        
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
 
    if (count<=1)
    {
        return true;
    }
    else{
        return false;
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
   bool t=chechkRotatedsorted(arr,n);
    if (t==1)
    {
        cout<<"array is rotated and sorted"<<endl;
    }
    else cout<<"array is not rotated and sorted"<<endl;
return 0;
}