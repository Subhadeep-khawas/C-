#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the value of n";
    cin>>n;
    
    if(n%2==0){
        cout<<n/2;
    }
    else if(n%2!=0){
        cout<<3*n+1;
    }
}