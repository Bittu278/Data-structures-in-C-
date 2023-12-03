#include<iostream>
using namespace std;
void findTripletsum(int arr[],int size,int sum){
 for (int i = 0; i < size; i++)
 {
    for (int j = i+1; j < size; j++)
    {  
        for (int k = i+2; i < size; k++)
        {
            
            if(arr[i]+arr[j]+arr[k]==sum){
             cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
        }
        
       
    }
    
 }
 //sort(ans.begin(),ans.end());
 //return ans;
}
int main()
{
    int n,sum;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr[i];
    };
    cout<<"enter the required sum"<<endl;
    cin>>sum;
    findTripletsum(arr,n,sum);
return 0;
}