#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the value up to which GP will print:";
    cin>>n;
    for(int i=1;i<=(2*n);i=i++){
        cout<<i<<endl;
        i+=i;
    }
}
