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
    int rfactorial=1;
    for(int j=1;j<=r;j++){
        rfactorial*=j;
    }
    int nrfactorial=1;
    for(int k=1;k<=n-r;k++){
        nrfactorial*=k;
    }
    int combination=factorial/(rfactorial*nrfactorial);
    cout<<"combination="<<combination;
    return 0;
}