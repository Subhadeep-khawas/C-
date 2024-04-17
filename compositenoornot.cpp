#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of x";
    cin>>x;
    for(int i=2;i<=x-1;i++){
        if(x%i==0){
            cout<<"x is composite";
            break;
        }
        else{
            cout<<"x is not composite";
            break;
        }
    }
    return 0;
}