#include<iostream>
using namespace std;
int  fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f; 
}
int main(){
      int n,r;
      cout<<"Enter the value of n:";
      cin>>n;
      cout<<"Enter the value of r:";
      cin>>r;
      int nfact= fact(n);
      int rfact=fact(r);
      int nrfact=fact(n-r);
      int combination= nfact/(rfact*nrfact);
      cout<<"combination="<<combination;
      int permutation=nfact/rfact;
      cout<<"Permutation="<<permutation;
   return 0;
}
