#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of column:";
    cin>>n;
    cout<<"Print no. till:";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
    }