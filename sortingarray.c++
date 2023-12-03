#include <iostream>
using namespace std;
int main()
{    int temp;
    int arr[6]={2,3,4,1,5,6};
    for(int j=0;j<6;j++){
         for(int k=j+1;k<6;k++){
             if(arr[j]>arr[k])
                  {
                       temp=arr[j];
                       arr[j]=arr[k];
                        arr[k]=temp;
                  }
        }
}
cout<<"array after sorting"<<endl;
for (int i = 0; i < 6; i++)
{
   cout<<arr[i]<<" ";
}
 return 0;
}