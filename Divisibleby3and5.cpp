#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter the value of N:";
    cin>>N;
    if(N%3==0 && N%5==0){
        cout<<"N is divisible by both 3 & 5";
    } 
    else{
        cout<<"N is not divisible by both 3 & 5";
    }
}