#include<iostream>
using namespace std;
int main(){

    int age=10;
    int & ref=age; // Here 'ref' is a reference Variable 
    cout<<age<<endl;
    cout<<ref;


    return 0;
}