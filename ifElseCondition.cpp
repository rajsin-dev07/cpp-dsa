#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age :";
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You can not come to the party.";
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass for the party.";
    }
    else if(age<1){
        cout<<"You are yet to born.";
    }
    else{
        cout<<"You can come to the party.";
    }

    return 0;
}