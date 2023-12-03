#include<iostream>//not done
#include<bits/stdc++.h>
using namespace std;
bool uniqueOccurence(int arr[],int size){
int i=0,k=0,brr[10];
sort(arr,arr+(size-1));
while(i<size){
    int count=1;
    for (int j = i+1; j < size; j++)
    {
        if (arr[i]==arr[j])
        {
            count++;
        }
        else
        {
            break;
        }
    }

brr[k]=count;
k++;
i=i+count;    
}

}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array "<<endl;
     for (int i =0; i <n; i++)
    {
        cin>>arr[i];
    };
return 0;
}