#include<iostream>
using namespace std;
int main(){
    int x,y;
    int *p1=&x;
    int *p2=&y;
    cout<<"Enter 1st no.:";
    cin>>*p1;
    cout<<"Enter 2nd no.:";
    cin>>*p2;
    cout<<*p1+*p2;
    return 0;
}