#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    cout<<"Enter Two Numbers:";
    cin>>a>>b;
    cout<<"Select your Operation"<<endl;
    cout<<"[1] for Addition"<<endl;
    cout<<"[2] for Subtraction"<<endl;
    cout<<"[3] for Multiplication"<<endl;
    cout<<"[4] for Division"<<endl;
    cin>>n;
    switch(n){
        case 1:
            cout<<(a+b)<<endl;
            break;
        case 2:
            cout<<(a-b)<<endl;
            break;
        case 3:
            cout<<(a*b)<<endl;
            break;
        case 4:
            cout<<(a/b)<<endl;
            break;
        default:
            cout<<"Invalid Choice"<<endl;
    }
}