#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a";
    cin>>a;
     cout<<"Enter the value of b";
    cin>>b;
     cout<<"Enter the value of c";
    cin>>c;
    if(a=b){
        cout<<c;
    }
      else if(b=c){
        cout<<a;
    } else{
        cout<<b;
    }


}