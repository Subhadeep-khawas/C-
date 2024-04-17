#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter the value of N:";
    cin>>N;
    if(N>99 && N<1000){
        cout<<"Three digit number";
    }else{
        cout<<"Not a three digit number";
    }
}