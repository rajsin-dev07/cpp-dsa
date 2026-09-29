#include<iostream>
using namespace std;
int main(){

    bool usernameCorrect=true;
    bool passwordCorrect=true;
    bool accountBlocked=false;

    if(usernameCorrect && passwordCorrect){  // This is Logical AND operator. Here both condition must be true if even one condition is False , the reslt is false.
        cout<<"Login successful."<<endl;
    }
    if(usernameCorrect || passwordCorrect){ // This is Logical OR operator. Here, if atleast one condition is true, then result is true.
        cout<<"At least one detail is correct."<<endl;
    }
    if(! accountBlocked){ // This is a logical NOT operator. It reverse the boolean result.
        cout<<"Account is not blocked.";
    }
    


    return 0;
}