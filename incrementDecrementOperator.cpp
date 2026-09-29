#include<iostream>
using namespace std;
int main(){

    int a=10;
    int b=10;
    int c=10;
    int d=10;

    cout<<++a<<endl; // Pre-increment
    cout<<a<<endl;
    cout<<b++<<endl; // Post-increment
    cout<<b<<endl;
    cout<<--c<<endl; // Pre-decrement
    cout<<c<<endl;
    cout<<d--<<endl; // Post-decrement
    cout<<d<<endl;

    return 0;
}