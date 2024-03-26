#include<iostream>
using namespace std;
int main(){
    int a,sum=0,d;
    cout<<"Enter your number:"<<endl;
    cin>>a;;
    do{
        d=a%10;
        sum=sum+d;
        a=a/10;
        }
    while(a>0);
    cout<<"The sum of digits of number is "<<sum<<endl;
}