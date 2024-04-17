#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st no.";
    cin>>a;
    cout<<"Enter 2nd no.";
    cin>>b;
    int HCF=1;
    for(int i=2;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            HCF=i;
            cout<<HCF;
            break;
        }
    }
    return 0;
}