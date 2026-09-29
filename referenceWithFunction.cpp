#include<iostream>
using namespace std;

void fun1(int a , int b){ // Here we make a function which is fun1. 
    int sum = a+b;
    cout<<"sum is : "<<sum<<endl;
}

int main(){
    int x,y;
    cout<<"Enter 1st number: "<<endl;
    cin>>x;
    cout<<"Enter 2nd number: "<<endl;
    cin>>y;
    fun1(x,y); // Here we call The Function.
}