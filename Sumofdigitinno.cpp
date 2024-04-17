#include<iostream>
using namespace std;
int main(){
       int n;
       cout<<"Enter the value of n:";
       cin>>n;
       int lastdigit=0;
       int sum=0;
       while (n>0)
       {
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
       }
       cout<<sum;
      return 0; 
}
   
