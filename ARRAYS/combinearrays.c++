#include<iostream>
using namespace std;
int main(){
int a[3]={1,2,3};
int b[4]={4,5,6,7};
int c[7];
for(int i=0;i<3;i++){
   c[i]=a[i];
}
for(int i=3;i<7;i++){
   c[i]=b[i-3];
}
for(int i=0;i<7;i++){
   cout<<c[i]<<" ";
}
return 0;
}