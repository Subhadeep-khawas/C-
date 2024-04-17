#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
     f*= i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter the value of no. of rows:";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}