#include<stdio.h>
int main (){
int arr[7]={1,4,2,80,19,5,12};
int max=arr[0],i;
for(i=0;i<7;i++)
{if(arr[i]>max)
max=arr[i];
}
printf("maximum value of array is %d",max);
return 0;
}

