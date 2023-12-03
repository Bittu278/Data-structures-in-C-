//print the pair if it gives the required sum
//if there are two outputs then print them in increasing order on the bases of their of first element
#include<iostream>
using namespace std;
void findPairsum(int arr[],int size,int sum){
 for (int i = 0; i < size; i++)
 {
    for (int j = i+1; j < size; j++)
    {
       if(arr[i]+arr[j]==sum){
        cout<<min(arr[i],arr[j])<<" "<<max(arr[i],arr[j])<<endl;
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
    findPairsum(arr,n,sum);
return 0;
}