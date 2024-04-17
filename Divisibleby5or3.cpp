#include <iostream>
using namespace std;
int main(){
   int N;
   cout<<"Enter the value of N";
   cin>>N;
   if(N%3==0 && N%5==0){
    cout<<"N is divisible by either 3 or 5";
   } else{
     cout<<"N is not divisible by either 3 or 5";
   }
}