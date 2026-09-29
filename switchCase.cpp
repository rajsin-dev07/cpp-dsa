#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You are young";
        break;
    case 22:
        cout<<"You are 22 Year old";
        break; 
    case 2:
        cout<<"You are 2 year old";
        break;  
    default:
    cout<<"No specific case";
        break;
    }
cout<<"\n done.";

    return 0;
}