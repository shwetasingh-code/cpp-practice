#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"enter any number";  //taking input from the user
    cin>>num;
    cout<<"multiplication of this "<<num <<endl;
    for(int i=1; i<=10;i++){             
    cout<<num<<'x'<<i<<'='<<num*i<<endl;
    }
    return 0;
}
