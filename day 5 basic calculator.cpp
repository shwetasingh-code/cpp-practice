#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter any first number :-";
    cin>>a;
    cout<<"enter any second number :-";
    cin>>b;
    cout<<"addition ="<<a+b<<endl;
    cout<<"substraction ="<<a-b<<endl;
    cout<<"multiplication ="<<a*b<<endl;
    if(b!=0){
        cout<<"division ="<<(float)a/b<<endl;
    }
        else{
            cout<<"division not possible (cannot divide by zero)"<<endl;
        }
        return 0;
    }
    
