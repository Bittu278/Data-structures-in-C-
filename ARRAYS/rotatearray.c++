#include <iostream>
using namespace std;
void rotateArray(int arr[],int n,int k,int b[]){
    
    for (int i = 0; i < n; i++)
    {
        b[(i+k)%n]=arr[i];
    }
    
}
void printArray(int b[],int size ){
   for (int i = 0; i < size; i++)
   {
     cout<<b[i]<<" ";
   }
}
int main()
{
 int n;
cout<<"enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"enter the elements of the array"<<endl;
for (int  i = 0; i < n; i++)
{
    cin>>arr[i];
}
int k;
cout<<"enter the no of elements to rotate "<<endl;
cin>>k;
int b[n];
rotateArray(arr,n,k,b);
cout<<"after rotating array is "<<endl;
printArray(b,n);
return 0;
}
