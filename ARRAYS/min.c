#include<stdio.h>
int main (){
int arr[7]={1,4,2,80,19,5,12};
int min=arr[0],i;
for(i=0;i<7;i++)
{if(min>arr[i])
min=arr[i];
}
printf("minimum value of array is %d",min);
return 0;
}