#include<iostream>
using namespace std;

int main(){

    // Pointer is a data type which holds the address of other data type.

    int p=3;
    int *a=&p;

    // &  ---> (Address of) Operator

    cout<<"The address of p is "<<&p<<endl;
    cout<<"The address of p is "<<a<<endl;

    // *  ---> (Value at) Derefence operator

    cout<<"The Value at address of a is "<<*a<<endl;

    // Pointer to Pointer

    int **b=&a;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The Value at address b is "<<*b<<endl;
    cout<<"The Value at address Value_at(Value_at(b)) is "<<**b<<endl;

return 0;
}