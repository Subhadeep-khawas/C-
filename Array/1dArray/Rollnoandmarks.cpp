//Print student's roll no. whose marks is less than  35
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int marks[n];
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35)   cout<<i<<" ";
    }
    return 0;
}