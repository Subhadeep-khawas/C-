#include<iostream>
using namespace std;
void fun(int x,int y){  //Formal parameter
        cout<<"Address of fun x ="<<&x<<endl;
         cout<<"Address of fun y ="<<&y<<endl;
}
int main(){
    int x=3;    //Actual parameter
    int y=8;
    cout<<"Address of main x ="<<&x<<endl;
    cout<<"Address of main y ="<<&y<<endl;
    fun(x,y);
    return 0;

}