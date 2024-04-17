#include <iostream>
using namespace std;  //Absolute value means N=|N|
int main(){
    cout<<"Enter the value of N";
    int N;
    cin>>N;
    if(N>0){
        cout<<N;
    }
    if(N<0){
        cout<<-N;
    }
}