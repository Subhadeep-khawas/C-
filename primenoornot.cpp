#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a no.:";
    cin>>x;
    for(int i=2;i<=x-1;i++){
        if(x%i!=0){
            cout<<"x is prime no.";
            break;
        }
        else
        {
            cout<<"x is not prime no.";
            break;
        }
        
    }
    return 0; 
}