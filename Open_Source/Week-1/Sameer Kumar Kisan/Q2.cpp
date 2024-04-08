#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your number:"<<endl;
    cin>>a;
    if(a<0){
      cout<<"The number is negetive"<<endl;
    }
    else if(a==0){
        cout<<"The number equals zero"<<endl;
    }
    else{
        cout<<"The number is positive"<<endl;
    }
}