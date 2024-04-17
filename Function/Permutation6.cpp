#include<iostream>
using namespace std;
int main(){
    int n,r;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of r:";
    cin>>r;
    int factorial=1;
    for(int i=1;i<=n;i++){
       factorial*=i;
    }
    int nrfactorial=1;
    for(int j=1;j<=n-r;j++){
       nrfactorial*=j;
    }
    int permutation=factorial/nrfactorial;
    cout<<"Permutation="<<permutation;
    return 0;
}