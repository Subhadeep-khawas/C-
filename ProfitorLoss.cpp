#include<iostream>
using namespace std;
int main(){
    int SP,CP,P;  //SP=Selling price, CP=Cost price, P=Profit
    cout<<"Enter selling price";
    cin>>SP;
    cout<<"Enter cost price";
    cin>>CP;
    P=SP-CP;
    cout<<"Profit or loss of:";
    cout<<P<<endl;
    if(P>0){
        cout<<"Profit";
    }
    else{
        cout<<"Loss";
    }
}