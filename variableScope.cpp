#include<iostream>
using namespace std;
int y=10; // Global Variable: is declared outside all functions.
void display(){
    int x=20; // local Variable: is declared inside functions.
    cout<<x <<'\n' <<y <<'\n';
}
int main(){
    int z=15;
    if(z>5){
        int a=50; // Block Variable: is declared inside a specific block {}, such as an if, for or while block.
        cout<<a<<'\n';
    }
    display();
    // cout<<a<<'\n'; error because a is outside it's scope.
    cout<<y;
    return 0;
}