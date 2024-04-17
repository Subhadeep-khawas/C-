#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value up to which fibonacci deries printed:";
    cin>>n;
    int a=1;
    int b=1;
    int sum=0;
    for (int i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        sum=b;
    }
    cout<<sum;
    return 0;
}