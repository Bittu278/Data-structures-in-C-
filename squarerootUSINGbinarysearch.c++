//ignore the decimal value and then print answer
#include<iostream>
using namespace std;
long long int Findsquareroot(int num){
    int s=0,e=num,ans=-1;
  long long int mid=s+(e-s)/2;
   
   while (s<=e)
   {
     long long int sqaure=mid*mid;
      if ((sqaure)==num)
      { 
      return mid;
      }
       if((sqaure)<num)
       { ans=mid;
         s=mid+1;
       }
       else
      {
        e=mid-1;
       }
        mid=s+(e-s)/2;
    }
return ans;
}
int main()
{ int n ;
 cout<<"enter the number "<<endl;
 cin>>n;
 int number=Findsquareroot(n);
 cout<<"squareroot of the number is "<<number<<endl;
return 0;
}