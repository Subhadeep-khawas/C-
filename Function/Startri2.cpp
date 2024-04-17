#include<iostream>
using namespace std;
void startri(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
      startri(3);
      startri(2);
 return 0;
}