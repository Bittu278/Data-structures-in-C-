#include<iostream>
using namespace std;
void Sum(int arr1[],int n,int arr2[],int m,int b[],int t)
{
  int i=n-1,j=m-1;
  int carry=0;
  int p=t-1;
  while (i>=0 && j>=0)
  {
     int val1=arr1[i];
     int val2=arr2[j];
     int sum=arr1[i]+arr2[j]+carry;
       
       carry=sum/10;
       sum=sum%10;
       b[p]=sum;
        p--;
        i--;
        j--;
  }
  //first case
  while (i>=0)
  {
    int sum=arr1[i]+carry;

       carry=sum/10;
       sum=sum%10;
       b[p]=sum;
       i--;
        
  }
  //second case
  while (j>=0)
  {
    int sum=arr2[j]+carry;

       carry=sum/10;
       sum=sum%10;
       b[p]=sum;
       j--;
        
  }
  //third case
  while (carry!=0)
  {
    int sum=carry;

       carry=sum/10;
       sum=sum%10;
       b[p]=sum;
        p--;
        i--; 
  }
}
void printArray(int b[],int size ){
   for (int i = 0; i < size; i++)
   {
     cout<<b[i]<<" ";
   }
}
int main()
{  int n;
cout<<"enter the size of array"<<endl;
cin>>n;
int arr1[n];
cout<<"enter the elements of the array"<<endl;
for (int  i = 0; i < n; i++)
{
    cin>>arr1[i];
}
int m;
cout<<"enter the size of array"<<endl;
cin>>m;
int arr2[m];
cout<<"enter the elements of the array"<<endl;
for (int  i = 0; i < m; i++)
{
    cin>>arr2[i];
}
int t;
  if (n>m)
  {
     t=n;
  }
  else if(m>n){
    t=m;
  }
  else{
     t=n+1;
  }
  int b[t];
  Sum(arr1,n,arr2,m,b,t);
  cout<<"sum of given arrays is "<<endl;
  printArray(b,t);
return 0;
}